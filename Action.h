//
// Created by fbeze on 05/11/2018.
//

#ifndef LITTLEDOT_ACTION_H
#define LITTLEDOT_ACTION_H

#include "Player.h"

class GameManager;


class Action {
public:
    Action(GameManager* pGameManager, const string& pName);
    virtual void init() = 0;
    const string & getName();
    virtual bool takeAction(string pParameters, Player *pPlayer) = 0;
    virtual void afterAction();
    bool isFinal();
    bool isInitial();


protected:
    GameManager *gameManager;
    string name;
    bool initialAction {false};
    bool onlyOnce {false};
    bool finalAction {false};
    vector<Action*> followingActions;
};


#endif //LITTLEDOT_ACTION_H
