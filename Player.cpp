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

string Player::getHandState() {
    string result("{ ");
    for (int i = 0; i < nCards; ++i) {
        result = result + to_string(hand[i]->value) + " " + Card::suits[hand[i]->suit];
        if (i != nCards - 1) {
            result = result + ", ";
        }
    }
    result = result + " }";
    return result;
}

string Player::getVisibleState() {
    string result("{ ");
    result += "cards = " + to_string(nCards);
    result += " }";
    return result;
}
