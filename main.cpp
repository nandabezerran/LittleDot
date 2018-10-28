#include <iostream>
#include "GameManager.h"

using namespace std;

int main() {
    //Create GameManager
    GameManager gameManager;

    //Initialize the game
    int nPlayers = 3;
    gameManager.init(nPlayers);

    //Call getState and print result
    cout << gameManager.getState(1);

    return 0;
}