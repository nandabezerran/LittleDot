//
// Created by fbeze on 17/12/2018.
//

#ifndef LITTLEDOT_DISCARDACTION_H
#define LITTLEDOT_DISCARDACTION_H

#include "Action.h"

class DiscardAction : public Action{
public:
    DiscardAction(GameManager *pGameManager);
    void init() override;
    bool takeAction(string pParameters, Player *pPlayer) override;

};


#endif //LITTLEDOT_DISCARDACTION_H
