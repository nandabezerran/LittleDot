//
// Created by fbeze on 25/10/2018.
//

#ifndef LITTLEDOT_GAMEMANAGER_H
#define LITTLEDOT_GAMEMANAGER_H

#include "Pack.h"
#include "Player.h"
#include <iostream>
#include <vector>

using namespace std;

class GameManager {
public:
    GameManager();
    void init(int pPlayers);
    string getState(int pPlayerId);
    bool takeAction(int pPlayerId, string pAction);

private:
    Pack* pack;
    Player** players;
    int nPlayers;
    int currPlayer;
    int nPossibleActions;
    vector<string> possibleActions;
};


#endif //LITTLEDOT_GAMEMANAGER_H
