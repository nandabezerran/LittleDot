//
// Created by fbeze on 25/10/2018.
//

#ifndef LITTLEDOT_PACK_H
#define LITTLEDOT_PACK_H
#define NUMBER_OF_CARDS 52

#include "Card.h"

class Pack {
public:
    int amount;
    Card* cards[NUMBER_OF_CARDS];

    Pack();
};


#endif //LITTLEDOT_PACK_H
