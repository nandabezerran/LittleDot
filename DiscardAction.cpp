//
// Created by fbeze on 17/12/2018.
//

#include "DiscardAction.h"

DiscardAction::DiscardAction(GameManager *pGameManager) : Action(pGameManager, "DISCARD") {
    onlyOnce = true;
    finalAction = true;
}

//7 hearts -> this is the discard parameter format
bool DiscardAction::takeAction(string pParameters, Player *pPlayer){
    //TODO improve read the discard parameters
    //read the discard parameters
    int number;
    string suit;

    string delimiter = " ";
    size_t pos = pParameters.find(delimiter);

    if (pos == std::string::npos){
        return false;
    }

    number = atoi(pParameters.substr(0,pos).c_str());
    suit = pParameters.substr(pos+1);

    Card* card = pPlayer->searchCard(number, suit);

    //Implement the discard
    if(card == nullptr){
        return false;
    }

    gameManager->getDiscard()->discardCard(card);
    pPlayer->removeCard(card);

    return true;

}

void DiscardAction::init() {
    Action* preReq = gameManager->getAction("DRAW");
    if (preReq != nullptr){
        preRequired.emplace_back();
    }
}
