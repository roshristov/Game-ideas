#include <iostream> 
#include "text.h"
#include <thread>
#include <chrono>
using std::endl;
using std::cout;

void Text::Story(int& order) {
    //it will have a set amount, where it continues to the next until it is finished.

    switch (order) {
        case 1:
            cout << "You have been recruted by the king of the kingdom Ember Nest to find the princess." << endl;
            cout << "He tells you all the details and you set off." << endl << endl;
            break;
        case 2:
            cout << "After defeating that foul beast, see a clue." << endl;
            cout << "A note." << endl;
            cout << "It says that 'the princess is in another dungeon'." << endl;
            cout << "You know where you need to go, so you set off." << endl << endl;

            break;
        case 3:
            cout << "After finishing off the monster, you see her." << endl;
            cout << "The princess." << endl;
            cout << "You release her and she thanks you for the help." << endl;
            cout << "You return to the king to tell the good news." << endl;
            cout << "As thanks, he awards you with countless riches." << endl << endl;
            cout << "THE END" << endl;
            break;
        default:
            //will be empty
            break;
    }

    return;
}

//won't be used for now.
void Text::Interactions(int& sort) {
    //will have the shop dialogue, enemy confrontations and more if needed.

    //1 - shop; 2 - enemy; 3 - adventurer
    switch (sort) {
        case 1:
            cout << "test11" << endl;
            //The shop saying hello to you.

            //should have the function to sell items. when it is done, it will be placed in here.
            break;
        case 2:
            cout << "test22" << endl;
            //The ambush of the enemy.

            //should have the battle system called here. if there is time available, a 'negotiation' section will be available, where 
            //you don't fight the enemy.
            break;
        case 3:
            //The encounter of a traveler while you travel from place to place. It is random if you enqounter them or not.

            //can either become a 'shop', where you can buy some stuff, or an enemy, where you have to fight them.
            break;
        default:
            // will be empty
            break;
    }

    return;
}