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
    string cardToDiscard;
    string discardAction;
    bool result;

    for (int i = 0; i < nPlayers ; ++i) {
        discardAction = "DISCARD(";
        result = gameManager.takeAction(i, "DRAW()");
        if(!result) {
            cout << "Invalid draw action!" << endl;
        }
        cout << gameManager.getState(i) << endl << endl;
        getline (cin, cardToDiscard);
        discardAction += cardToDiscard;
        discardAction += ")";
        result = gameManager.takeAction(i, discardAction);
        if(!result) {
            cout << "Invalid discard action!" << endl;
        }
        cout << gameManager.getState(i) << endl << endl;
    }

    return 0;
}