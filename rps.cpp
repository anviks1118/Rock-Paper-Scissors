/*
1. Get user input.
2. Program chooses rock, paper, or scissors at random
3. Program decides winner, loser, or tie
*/

#include <iostream>
using namespace std;

int main() {
    // 0. Introduction (Welcome)
    cout << "=============================================================" << endl;
    cout << "              Let's play Rock, Paper, Scissors!" << endl;
    cout << "=============================================================\n" << endl;
    cout << "Enter a number to choose an option. I will do the same!" << endl;    
    cout << "  1: Rock" << endl;
    cout << "  2: Paper" << endl;
    cout << "  3: Scissors" << endl;
    
    // 1. Get user input.
    int user_input;
    cout << "\nChoose your input: ";
    cin >> user_input;

    while ((user_input != 1) && (user_input != 2) && (user_input != 3)) {
        cout << "Choose a valid number: ";
        cin >> user_input;
    }
    
    if (user_input == 1) {
        cout << "You chose Rock!" << endl;
    }
    else if (user_input == 2) {
        cout << "You chose Paper!" << endl;
    }
    else if (user_input == 3) {
        cout << "You chose Scissors!" << endl;
    }

    // 2. Have program randomly choose between R, P, and S.
    
    
    
    // 3. Decide outcome.

    return 0;
}