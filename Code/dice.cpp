#include <iostream>
#include "dice.h" 

// rolling a single dice with 'sides' number of sides
int Dice::rollDice(int sides) {
    // random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // random number between 1 and 'sides'
    int roll = std::rand() % sides + 1;

    return roll;
}
