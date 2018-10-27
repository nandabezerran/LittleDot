//
// Created by fbeze on 25/10/2018.
//

#ifndef LITTLEDOT_CARD_H
#define LITTLEDOT_CARD_H

enum Suit{
    hearts,
    diamonds,
    spades,
    clubs
};

class Card {
public:
    Suit suit;
    int value;

    Card(Suit pSuit, int pValue);
};


#endif //LITTLEDOT_CARD_H
