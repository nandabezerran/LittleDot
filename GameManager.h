//
// Created by fbeze on 25/10/2018.
//

#ifndef LITTLEDOT_GAMEMANAGER_H
#define LITTLEDOT_GAMEMANAGER_H

#include "Pack.h"
#include "Player.h"
#include <iostream>

using namespace std;

class GameManager {
public:
    GameManager();
    void init(int pPlayers);
    string getState(int pPlayerId);

private:
    Pack* pack;
    int nPlayers;
    Player** players;
};


#endif //LITTLEDOT_GAMEMANAGER_H
