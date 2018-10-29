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
    cout << gameManager.getState(0) << endl << endl;

    //Executing the action of drawing and Discard
    string discardCard;
    for (int i = 0; i < nPlayers ; ++i) {
        gameManager.takeAction(i, "DRAW");
        getline (cin, discardCard);
        gameManager.takeAction(i, discardCard);
        cout << gameManager.getState(i) << endl << endl;
    }


    return 0;
}