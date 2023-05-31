//showing options on where to go that are randomly decided (an example: "Where do you want to go?").
//                                                                      1. village
//                                                                      2. dungeon
//if you wrote something invalid, it should ask to try again and to show the same prompt again.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "world.h"

void World::showOptions() {
    std::cout << "Where do you want to go?" << std::endl;
    std::cout << "1. Village" << std::endl;
    std::cout << "2. Dungeon" << std::endl;
}

bool World::isValidOption(int choice) {
    return choice == 1 || choice == 2;
}

void World::promptInvalidOption() {
    std::cout << "Invalid option. Please try again." << std::endl;
}

void World::handleChoice(int choice) {
    switch (choice) {
        case 1:
            std::cout << "You are going to the village." << std::endl;
            // Add village logic here
            break;
        case 2:
            std::cout << "You are going to the dungeon." << std::endl;
            // Add dungeon logic here
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
            break;
    }
}

int main() {
    World world;
    int choice;

    do {
        world.showOptions();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (world.isValidOption(choice)) {
            world.handleChoice(choice);
            break;
        } else {
            world.promptInvalidOption();
        }
    } while (true);

    return 0;
}



//what can happen at these locations (at the village, you can buy stuff; at the dungeon, you fight enemies).
//the shops can be implemented thanks to the items file having a good base, but the combat will have to wait a little so that i
//can finish the character stats.

//P.S. at the inventory files, it asks for a class "Item", even though that class isn't set in 'items.h'. i fixed it enough so that
//there isn't an error, but i don't know what data to place in it, so if you have time, check it out.