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
        if(hand[i] != nullptr) {
            result = result + to_string(hand[i]->value) + " " + Card::suits[hand[i]->suit];
        }
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

Card *Player::searchCard(vector<string> pDiscardParameters) {
    for (int i = 0; i < nCards; ++i) {
        if (hand[i]->value == atoi(pDiscardParameters[1].c_str())){
           if(Card::suits[hand[i]->suit] == pDiscardParameters[2]){
               return hand[i];
           }
        }
    }
    return nullptr;
}

bool Player:: removeCard(Card* pCard){
    for (int i = 0; i < nCards ; ++i) {
        if(hand[i] == pCard){
            hand[i] = nullptr;
            for (int j = i; j < nCards; ++j) {
                if (j == nCards - 1){
                    hand[j] = nullptr;
                    nCards--;
                    return true;
                }
                hand[j] = hand[j+1];
            }
            return true;
        }
    }
    return false;
}
