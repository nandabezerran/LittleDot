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
    cout << gameManager.getState(1) << endl << endl;

    //Executing the action of drawing
    for (int i = 0; i < nPlayers ; ++i) {
        gameManager.takeAction(i, "DRAW");
        cout << gameManager.getState(i) << endl << endl;
    }


    return 0;
}