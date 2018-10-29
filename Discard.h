//
// Created by fbeze on 28/10/2018.
//

#ifndef LITTLEDOT_DISCARD_H
#define LITTLEDOT_DISCARD_H

#include <stack>
#include "Card.h"

using namespace std;

class Discard {
public:
    void discardCard(Card* pCard);

    Discard();


private:
    stack<Card*> stack;
    int discardAmount;

};


#endif //LITTLEDOT_DISCARD_H
