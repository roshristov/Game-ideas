#include <iostream> 
#include "text.h"
using std::endl;
using std::cout;

void Text::Story(int& order) {
    //it will have a set amount, where it continues to the next until it is finished.
    //I want there to be multuple story variations to be picked at random (different switch statements), I just don't
    //know how to implement it.

    switch (order) {
        case 1:
            cout << "test1" << endl;
            //Intro text dump ("The princess has been captured. You have been selected by the king to find her." something like that)
            break;
        case 2:
            cout << "test2" << endl;
            //Development of the plot ("You found a perfume on the floor. It seems to belong to the princess. We are getting close.")
            break;
        case 3:
            //Near the end ("We know where they are keeping the princess. We just have to get there and save her.")
            break;
        case 4:
            //The end credits ("The princess is saved! You have been awarded for your efforts. /n THE END")
            break;
        default:
            //will be empty
            break;
    }

    return;
}

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