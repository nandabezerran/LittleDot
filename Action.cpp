//
// Created by fbeze on 05/11/2018.
//

#include "Action.h"

const string & Action::getName() {
    return name;
}

Action::Action(GameManager *pGameManager, const string& pName) : gameManager(pGameManager), name(pName){}

void Action::afterAction() {
    if (onlyOnce){
        gameManager->removePossibleAction(this);
    }
}

bool Action::isFinal() {
    return finalAction;
}

bool Action::isInitial() {
    return initialAction;
}

