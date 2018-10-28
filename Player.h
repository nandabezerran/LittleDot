//
// Created by fbeze on 26/10/2018.
//

#ifndef LITTLEDOT_PLAYER_H
#define LITTLEDOT_PLAYER_H
#define HAND_SIZE 10

#include "Card.h"
#include <iostream>

using namespace std;

class Player {
public:
    Player();
    void receiveCard(Card* card);
    string getHandState();
    string getVisibleState();

private:
    Card* hand[HAND_SIZE];
    int nCards;
};


#endif //LITTLEDOT_PLAYER_H
