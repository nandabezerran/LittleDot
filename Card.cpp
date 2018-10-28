//
// Created by fbeze on 25/10/2018.
//

#include "Card.h"

Card::Card(Suit pSuit, int pValue) : suit(pSuit), value(pValue){}

static const string cardsSuits[] = {"hearts", "diamonds", "spades", "clubs"};
const string *Card::suits = cardsSuits;