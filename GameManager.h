//
// Created by fbeze on 25/10/2018.
//

#ifndef LITTLEDOT_GAMEMANAGER_H
#define LITTLEDOT_GAMEMANAGER_H

#include "Pack.h"
#include "Discard.h"
#include "Player.h"
#include "Action.h"
#include <iostream>
#include <vector>

using namespace std;

class GameManager {
public:
    GameManager();
    void init(int pPlayers);
    string getState(int pPlayerId);
    bool takeAction(int pPlayerId, string pAction);
    Player* getPlayer(int pPlayerId);
    Pack* getPack();
    void addPossibleAction(Action* pAction);
    Action* getAction(const string& pActionName);
    void removePossibleAction(Action* pAction);
    Discard* getDiscard();

private:
    Discard* discard;
    Pack* pack;
    Player** players;
    int nPlayers;
    int currPlayer;
    vector<Action*> possibleActions;
    vector<Action*> existingActions;

    void setInitialActions();
};


#endif //LITTLEDOT_GAMEMANAGER_H
