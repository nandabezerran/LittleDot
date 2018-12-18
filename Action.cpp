//
// Created by fbeze on 05/11/2018.
//

#include "Action.h"
#include "GameManager.h"

const string & Action::getName() {
    return name;
}

Action::Action(GameManager *pGameManager, const string& pName) : gameManager(pGameManager), name(pName){}

void Action::afterAction() {
    if (onlyOnce){
        gameManager->removePossibleAction(this);
    }
    for(auto &followingAction : followingActions) {
        gameManager->addPossibleAction(followingAction);
    }
}

bool Action::isFinal() {
    return finalAction;
}

bool Action::isInitial() {
    return initialAction;
}

