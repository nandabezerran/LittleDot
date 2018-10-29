//
// Created by fbeze on 25/10/2018.
//

#ifndef LITTLEDOT_PACK_H
#define LITTLEDOT_PACK_H
#define NUMBER_OF_CARDS 104

#include "Card.h"

class Pack {
public:
    int packAmount;
    Card* cards[NUMBER_OF_CARDS];

    Pack();

    Card *drawCard();
};


#endif //LITTLEDOT_PACK_H
