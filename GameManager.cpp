//
// Created by fbeze on 25/10/2018.
//
#include "GameManager.h"

GameManager::GameManager(){
    //Create the pack
    pack = new Pack();
    possibleActions.emplace_back("DRAW");
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

bool GameManager::takeAction(int pPlayerId, string pAction) {
    if(currPlayer != pPlayerId){
        return false;
    }

    //TODO implement when we have more actions
    /*for (int i = 0; i < possibleActions.size(); ++i) {
        if(pAction.compare(0, possibleActions[i].length(), possibleActions[i]) == 0){

        }
    }*/

    //TEMP
    if (pAction.compare(0, 4, "DRAW") == 0){
        players[pPlayerId]->receiveCard(pack->drawCard());
        possibleActions.clear();
        possibleActions.emplace_back("DISCARD");

        return true;
    }

    //DISCARD(7 hearts) -> this is the discard parameter format
    else if (pAction.compare(0, 7, "DISCARD") == 0){
        //TODO read the discard parameters
        //TODO implement the discard
        currPlayer = (currPlayer + 1) % nPlayers;
        return true;
    }

    return false;
}
