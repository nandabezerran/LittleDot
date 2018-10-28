//
// Created by fbeze on 28/10/2018.
//

#include <stack>
#include "Discard.h"

void Discard::discardCard(Card *pCard) {
    stack.push_back(*pCard);

}
