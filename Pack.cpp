//
// Created by fbeze on 25/10/2018.
//

#include "Pack.h"

Pack::Pack() {
    //Instantiate all the cards
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 13; ++j) {
            cards[j + (i * 13)] = new Card((Suit)i, j+1);
        }
    }

}
