//showing options on where to go that are randomly decided (an example: "Where do you want to go?").
//                                                                      1. village
//                                                                      2. dungeon
//if you wrote something invalid, it should ask to try again and to show the same prompt again.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "world.h"
#include "battle.h"
#include "glossary.h"

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
            visitVillage();
            break;
        case 2:
            visitDungeon();
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
            break;
    }
}

void World::visitVillage() {
    std::cout << "You have arrived at the village." << std::endl;
    std::cout << "What would you like to do?" << std::endl;
    std::cout << "1. Buy stuff" << std::endl;
    std::cout << "2. Go back" << std::endl;

    int choice;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            buyStuff();
            break;
        case 2:
            std::cout << "You leave the village." << std::endl;
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
            break;
    }
}

void World::visitDungeon() {
    std::cout << "You have entered the dungeon." << std::endl;
    std::cout << "Prepare for battle!" << std::endl;
    fightEnemies();
}

void World::buyStuff() {
    std::cout << "You have entered the shop." << std::endl;
    
}
//the functions won't be used for now.

void World::fightEnemies() {
    // std::cout << "You encounter a group of enemies!" << std::endl;
    Battles battle;
    battle.Battle();
}

//what can happen at these locations (at the village, you can buy stuff; at the dungeon, you fight enemies).
//the shops can be implemented thanks to the items file having a good base, but the combat will have to wait a little so that i
//can finish the character stats.

//P.S. at the inventory files, it asks for a class "Item", even though that class isn't set in 'items.h'. i fixed it enough so that
//there isn't an error, but i don't know what data to place in it, so if you have time, check it out.