#include <iostream> 
#include "ui.h"
using std::endl;
using std::cout;
using std::cin;


void UserInterface::Interface() {
    cout << "--------------------------------------------------------D&D-Game--------------------------------------------------------" 
    << endl; // 120 characters to fit the top of the console.

// Main menu 
    cout << "Press any button to continue..." << endl;
    cout << "Press 1 to exit." << endl;

    //user's choice
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            // Exit game
            throw std::runtime_error("Exiting game...");   //made for closing the program
            break;
        default:
            // will be empty. no need for the number to be correct.
            break;
    }

}
