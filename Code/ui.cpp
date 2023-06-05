#include <iostream> 
#include "ui.h"
using std::endl;
using std::cout;
using std::cin;


void UserInterface::Interface(std::ostream &cout) {
    cout << "--------------------------------------------------------D&D-Game--------------------------------------------------------" 
    << endl; // 120 characters to fit the top of the console.

// Main menu 
    cout << "1. Start Game" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter your choice: ";

    //user's choice
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            // Start new game
            break;
        case 2:
            // Exit game
            throw std::runtime_error("Exit");   //made for closing the program
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }

}
