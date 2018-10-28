//
// Created by fbeze on 28/10/2018.
//

#ifndef LITTLEDOT_DISCARD_H
#define LITTLEDOT_DISCARD_H

#include <stack>
#include "Card.h"


class Discard {
public:
    void discardCard(Card* pCard);

private:
    stack<Card*> stack;

};


#endif //LITTLEDOT_DISCARD_H
