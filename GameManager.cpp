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

    //TODO Hand out the cards
    for (int i = 0; i < nPlayers ; ++i) {
        players[i] = new Player();
        for (int j = 0; j < 9; ++j) {
            players[i]->receiveCard(pack->drawCard());
        }

    }



}