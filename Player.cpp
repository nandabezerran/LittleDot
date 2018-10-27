//
// Created by fbeze on 26/10/2018.
//

#include "Player.h"

Player::Player() {
    nCards = 0;
    //Range-based for loop
    for (auto &i : hand) {
        i = nullptr;
    }

}

void Player::receiveCard(Card *card) {
    hand[nCards] = card;
    nCards++;
}
