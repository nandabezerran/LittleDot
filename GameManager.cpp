//
// Created by fbeze on 25/10/2018.
//
#include "GameManager.h"

GameManager::GameManager(){
    //Create the pack
    pack = new Pack();
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
