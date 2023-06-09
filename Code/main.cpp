#include <iostream> 
#include <exception>
#include <thread>
#include <chrono>
using std::cin;
using std::cout;
using std::endl;
using std::string;
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

    Character character;
    character.Creation();

    //after making the heroes.
    Text story;
    int order = 1;
    story.Story(order);
    order++;

    World world;
    string choice;

    cout << "You are in front of the dungeon. Do you enter inside?" << endl;
    cin >> choice;
    cout << endl;
    try {
        world.fightEnemies();
    } catch (const std::exception& e) {
        cout << e.what() << endl;
        return 0;
    }


    //will be used when there are more options
    // do {
    //     world.showOptions();
    //     cout << "Enter your choice: ";
    //     cin >> choice;

    //     if (world.isValidOption(choice)) {
    //         world.handleChoice(choice);
    //         break;
    //     } else {
    //         world.promptInvalidOption();
    //     }
    // } while (true);


    //after the first encounter
    story.Story(order);
    order++;

    cout << "You reach the dungeon. Do you dare enter this building?" << endl;
    cin >> choice;
    cout << endl;
    try {
        world.fightEnemies();
    } catch (const std::exception& e) {
        cout << e.what() << endl;
        return 0;
    }


    //after the last encounter
    story.Story(order);
	std::this_thread::sleep_for (std::chrono::seconds(5));
	return 0;
}
