#include <ostream>
#include "ui.h"
using namespace std;


char UserInterface::Interface(std::ostream& cout, char& text) {
    // Main menu 
    cout << "=== D&D Game ===" << std::endl;
    cout << "1. Start Game" << std::endl;
    cout << "2. Load Game" << std::endl;
    cout << "3. Exit" << std::endl;
    cout << "Enter your choice: ";

    //user's choice
    int choice;
    std::cin >> choice;

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
            cout << "Invalid choice. Please try again." << std::endl;
            break;
    }

    return text; 
}

int main() {
    UserInterface ui;
    char text = ' ';

    while (text != '3') {
        text = ui.Interface(std::cout, text);
    }

    return 0;
}
