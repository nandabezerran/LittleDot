//
// Created by fbeze on 25/10/2018.
//
#include <stdlib.h>
#include <time.h>
#include "Pack.h"

Pack::Pack() {
    srand((unsigned int)time(nullptr));
    amount = NUMBER_OF_CARDS;
    //Instantiate all the cards
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 13; ++j) {
            cards[j + (i * 13)] = new Card((Suit)(i%4), j+1);
        }
    }
}

Card *Pack::drawCard() {
    if (amount == 0){
        return nullptr;
    }

    int randNumber = rand() % NUMBER_OF_CARDS;

    Card* result = cards[randNumber];

    while(result == nullptr){
        randNumber = (randNumber + 1) % NUMBER_OF_CARDS;
        result = cards[randNumber];
    }

    amount--;
    cards[randNumber] = nullptr;
    return result;
}
