#include <iostream>
#include "interactions.h"

void Interactions::displayShopClerk() {
    std::cout << "You see a friendly shop clerk." << std::endl;
    std::cout << "Clerk: Welcome to my shop! How can I assist you today?" << std::endl;
   
    //  shop clerk interaction logic here
}

void Interactions::displayBandit() {
    std::cout << "A bandit blocks your way." << std::endl;
    std::cout << "Bandit: Hand over your valuables or prepare for a fight!" << std::endl;
    
    // bandit interaction logic here
}

void Interactions::displaySecretDoor() {
    std::cout << "You have discovered a secret door." << std::endl;
    std::cout << "What would you like to do?" << std::endl;
    std::cout << "1. Open the door" << std::endl;
    std::cout << "2. Ignore it and continue" << std::endl;
    
    // secret door interaction logic here
}
