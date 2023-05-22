#include <iostream> 
using std::cin;
using std::cout;
using std::endl;
#include "ui.h"
#include "dice.h" 
#include "text.h"

int main() {
    UserInterface interface;  
    char text; 
    interface.Interface(cout, text);

    //example on how to use 'rollDice'
    int sides = 6;
    Dice dice;
    cout << dice.rollDice(sides) << endl;

    //after selecting the heroes.
    Text story;
    int order = 1;
    story.Story(order);
    order++;

    //example of a shop
    char sort = "shop";
    story.Interactions(sort);   //doesn't work.

    //after some encounters
    story.Story(order);
    order++;
	return 0;
}
