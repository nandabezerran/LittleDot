//
// Created by fbeze on 28/10/2018.
//

#include "Discard.h"

void Discard::discardCard(Card* pCard) {
    stack.push(pCard);
    discardAmount++;
}

Discard::Discard() {
    discardAmount = 0;

}
