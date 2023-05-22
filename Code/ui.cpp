#include <ostream>
#include <iostream> 
#include "ui.h"
using std::endl;
using std::cout;
using std::cin;


char UserInterface::Interface(std::ostream &cout, char& text) {
    cout << "--------------------------------------------------------D&D-Game--------------------------------------------------------" 
    << endl; // 120 characters to fit the top of the console.

// Main menu 
    cout << "1. Start Game" << endl;
    cout << "2. Load Game" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";

    //user's choice
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            // Start new game
            
            break;
        case 2:
            // Load game 
            break;
        case 3:
            // Exit game

            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }

    return text; 

    return 0;
}