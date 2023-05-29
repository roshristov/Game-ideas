#include <iostream>
#include "commands.h"

void showInventory(const std::string& characterName) {
    // inventory implementation
    std::cout << "Showing inventory for character: " << characterName << std::endl;
    
}

void showStats() {
    // stats implementation
    std::cout << "Showing stats of the characters" << std::endl;

}

void showHelp() {
    // show all available commands
    std::cout << "Available commands:\n"
              << "-inventory <character-name>: Show inventory for a specific character.\n"
              << "-stats: Show the stats of the characters.\n"
              << "-help: Show all the available commands.\n";
    
}
