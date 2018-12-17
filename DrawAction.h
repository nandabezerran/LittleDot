//
// Created by fbeze on 05/11/2018.
//

#ifndef LITTLEDOT_DRAWACTION_H
#define LITTLEDOT_DRAWACTION_H


#include "Action.h"

class DrawAction : public Action {
public:
    DrawAction(GameManager *pGameManager);
    void init() override;
    bool takeAction(string pParameters, Player *pPlayer) override;

};


#endif //LITTLEDOT_DRAWACTION_H
