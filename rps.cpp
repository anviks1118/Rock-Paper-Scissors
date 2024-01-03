/*
1. Get user input. √
2. Program chooses rock, paper, or scissors at random √
3. Program decides winner, loser, or tie √
*/

#include <iostream>
#include <random>
#include <string>
using namespace std;

void winner (int user_input, int program_option) {
    // Show visuals
    string rock = "    _______  \n"
                "---'   ____) \n" 
                "     (_____) \n"
                "     (_____) \n"
                "     (____)  \n"
                "---.__(___)  \n";
    
    string paper = "    _______        \n"
                "---'   ____)____   \n"
                "          ______)  \n"
                "          _______) \n"
                "         _______)  \n"
                "---.__________)    \n";
    
    string scissors = "     ________       \n"
                "---'      ____)____  \n"
                "             ______) \n"
                "         __________) \n"
                "        (____)       \n"
                "-----.__(___)        \n";
            
    if (user_input == 1) {
        cout << "You chose rock" << endl;
        cout << rock << endl;
    }
    else if (user_input == 2) {
        cout << "You chose paper" << endl;
        cout << paper << endl;
    }
    else if (user_input == 3) {
        cout << "You chose scissors" << endl;
        cout << scissors << endl;
    }

    cout << "vs." << endl;

    if (program_option == 1) {
        cout << "\nProgram chose rock" << endl;
        cout << rock << endl;
    }
    else if (program_option == 2) {
        cout << "\nProgram chose paper" << endl;
        cout << paper << endl;
    }
    else if (program_option == 3) {
        cout << "\nProgram chose scissors" << endl;
        cout << scissors << endl;
    }


    // 3. (Rock) Winning outcome
    if (user_input == 1 && program_option == 2) {
        cout << "Program wins! Paper beats rock." << endl;
    }
    else if (user_input == 1 && program_option == 3) {
        cout << "You won! Rock beats scissors." << endl;
    }
    else if (user_input == 1 && program_option == 1) {
        cout << "It's a tie!" << endl;
    }

    // (Paper) Winning outcome
    else if (user_input == 2 && program_option == 3) {
        cout << "Program wins! Scissors beats paper." << endl;
    }
    else if (user_input == 2 && program_option == 1) {
        cout << "You won! Paper beats rock." << endl;
    }
    else if (user_input == 2 && program_option == 2) {
        cout << "It's a tie!" << endl;
    }

    // (Scissors) Winning outcome
    else if (user_input == 3 && program_option == 1) {
        cout << "Program wins! Rock beats scissors." << endl;
    }
    else if (user_input == 3 && program_option == 2) {
        cout << "You won! Scissors beats paper." << endl;
    }
    else if (user_input == 3 && program_option == 3) {
        cout << "It's a tie!" << endl;
    }
}

int main() {
    // 0. Introduction (Welcome)
    cout << "=============================================================" << endl;
    cout << "              Let's play Rock, Paper, Scissors!" << endl;
    cout << "=============================================================\n" << endl;
    cout << "Enter a number to choose an option. I will do the same!" << endl;    
    cout << "  1: Rock" << endl;
    cout << "  2: Paper" << endl;
    cout << "  3: Scissors" << endl;
    /*

    // 1. Get user input. */
    int user_input;
    cout << "\nChoose your input: ";
    cin >> user_input;

    while ((user_input != 1) && (user_input != 2) && (user_input != 3)) {
        cout << "Choose a valid number: ";
        cin >> user_input;
    }

    cout << endl;

    // 2. Have program randomly choose between R, P, and S.
    srand(time(0));
    int program_option = rand() % 3 + 1;
    // v2 = rand() % 100 + 1;     // v2 in the range 1 to 100  https://cplusplus.com/reference/cstdlib/rand/

    // Declare winner
    winner(user_input, program_option);

    return 0;
}