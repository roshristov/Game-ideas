#include <iostream>
#include "dice.h" 

int main() {
    // Roll a six-sided dice
    int result = rollDice(6);

    // result
    std::cout << "You rolled: " << result << std::endl;

    return 0;
}
