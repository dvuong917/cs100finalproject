hyneut/menu
#include "../headers/mainMenu.h"
#include "../headers/gameplay.h"
#include "../headers/characterMenu.h"
#include "../headers/node.h"
#include "../headers/storyTree.h"

using namespace std;

void wait() {
    string unused;
    cout << "Enter any key to continue " ;
    cin >> unused;
}

int main() {
    gameMenu game = gameMenu();
    mainMenu main = mainMenu();
    characterMenu cMenu = characterMenu();

    while (main.getInput() != 1) {
    main.print();
    main.input(3);
    main.choice();
    }

    while (!cMenu.getNext()) {
    cMenu.print();
    //while !something to keep wrapping for invalid input
    cMenu.printClass();
    cMenu.input(3);
    //end here
    cMenu.correct();
    }

    cout <<  endl << "===================================" << endl;
    cout << "*INSERT STORY HERE" << endl << endl;
    wait();
    cout << "===================================" << endl;

//while(1) only used for testing purposes
    while (1) {
    game.print();
    game.input(5);
    game.inputSelect();
    }

    return 0;
}
