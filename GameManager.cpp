//
// Created by fbeze on 25/10/2018.
//
#define NUMBER_OF_THE_CARD 8
#define SUIT_OF_THE_CARD 10
#include "GameManager.h"
#include "DrawAction.h"
#include "DiscardAction.h"
#include <algorithm>
#include <sstream>
#include <string>
#include <iostream>
#include <cstring>


GameManager::GameManager(){
    //Create the pack
    pack = new Pack();
    discard = new Discard();
    existingActions.emplace_back(new DrawAction(this));
    existingActions.emplace_back(new DiscardAction(this));
    setInitialActions();
}

void GameManager::init(int pPlayers) {
    //Define number of players
    nPlayers = pPlayers;
    players = new Player*[nPlayers];

    //Hand out the cards
    for (int i = 0; i < nPlayers ; ++i) {
        players[i] = new Player();
        for (int j = 0; j < 9; ++j) {
            players[i]->receiveCard(pack->drawCard());
        }
    }

    // Init all actions
    for (auto &action : existingActions) {
        action->init();
    }

    //TODO first player random
    //TODO when turns are implemented keep increasing the first player of each turn
    currPlayer = 0;


}

string GameManager::getState(int pPlayerId) {
    string result("{ hand = ");
    string otherPlayers[nPlayers - 1];
    int count = 0;
    for (int i = 0; i < nPlayers; ++i) {
        if (pPlayerId == i){
            result = result + players[i]->getHandState();
        }
        else{
            otherPlayers[count] = players[i]->getVisibleState();
            count++;
        }
    }

    result += ", other_players = [ ";
    for (int j = 0; j < count; ++j) {
        result += otherPlayers[j];
        if (j != count - 1){
            result += ", ";
        }
    }
    result = result + " ] }";
    return result;
}

//DRAW() DISCARD(7 hearts)
bool GameManager::takeAction(int pPlayerId, string pAction) {
    if(currPlayer != pPlayerId) {
        return false;
    }
    unsigned int parStart = pAction.find('(');
    unsigned int parEnd   = pAction.find(')');
    bool actionResult;

    if(parStart == std::string::npos || parEnd == std::string::npos){
        return false;
    }

    string parameter = pAction.substr(parStart+1,parEnd - (parStart+1));

    //go through actions and find action to be taken
    auto currPossibleActions = possibleActions;
    for (auto &possibleAction : currPossibleActions) {
        const string& actionName = possibleAction->getName();
        if(pAction.compare(0, actionName.length(), actionName) == 0){
            actionResult = possibleAction->takeAction(parameter, players[pPlayerId]);
            if (possibleAction->isFinal()){
                currPlayer = (currPlayer+1)%nPlayers;
                setInitialActions();
            }
            return actionResult;
        }
    }

    return false;
}

Player *GameManager::getPlayer(int pPlayerId) {
    return players[pPlayerId];
}

Pack *GameManager::getPack() {
    return pack;
}

void GameManager::addPossibleAction(Action *pAction) {
    possibleActions.emplace_back(pAction);
}

void GameManager::removePossibleAction(Action *pAction) {
    possibleActions.erase(std::find(possibleActions.begin(), possibleActions.end(), pAction));

}

Discard *GameManager::getDiscard() {
    return discard;
}

void GameManager::setInitialActions() {
    for (auto &existingAction : existingActions) {
        if (existingAction->isInitial()) {
            addPossibleAction(existingAction);
        }
    }

}

Action *GameManager::getAction(const string& pActionName) {
    for (auto &existingAction : existingActions) {
        if (existingAction->getName() == pActionName) {
            return existingAction;
        }
    }
    return nullptr;
}
