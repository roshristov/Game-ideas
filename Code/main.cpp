#include <iostream> 
#include <exception>
using std::cin;
using std::cout;
using std::endl;
#include "ui.h"
#include "dice.h" 
#include "text.h"
#include "character.h"
#include "world.h"


int main() {
    try {
        UserInterface interface;  
        interface.Interface();
    } catch (const std::exception& e) {
        cout << e.what() << endl;
        return 0;
    }

    //example on how to use 'rollDice'
    int sides = 6;
    Dice dice;
    cout << dice.rollDice(sides) << endl;

    Character character;
    character.Creation();

    //after selecting the heroes.
    Text story;
    int order = 1;
    story.Story(order);
    order++;

    World world;
    int choice;

    do {
        world.showOptions();
        cout << "Enter your choice: ";
        cin >> choice;

        if (world.isValidOption(choice)) {
            world.handleChoice(choice);
            break;
        } else {
            world.promptInvalidOption();
        }
    } while (true);

    //example of a shop
    int sort = 1; // 1 is for shop
    story.Interactions(sort);

    //example of an enemy
    sort = 2; // 2 is for enemy
    story.Interactions(sort);

    //after some encounters
    story.Story(order);
    order++;
	return 0;
}
