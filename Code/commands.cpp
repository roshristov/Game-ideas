#include <iostream>
#include "commands.h"

void showHelp() {   //won't be used for now.
    // show all available commands
    std::cout << "Available commands:\n"
              << "-inventory <character-name>: Show inventory for a specific character.\n"
              << "-stats: Show the stats of the characters.\n"
              << "-help: Show all the available commands.\n";
    
}
