//
// Created by fbeze on 05/11/2018.
//

#include "DrawAction.h"

DrawAction::DrawAction(GameManager *pGameManager) : Action(pGameManager, "DRAW") {
    initialAction = true;
    onlyOnce = true;
}

bool DrawAction::takeAction(string pParameters, Player *pPlayer) {
    pPlayer->receiveCard(gameManager->getPack()->drawCard());
    afterAction();
    return true;
}

void DrawAction::init() {

}
