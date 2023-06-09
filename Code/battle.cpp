#include <iostream> 
#include "battle.h"
#include "glossary.h"
#include "character.h"
#include <vector>
using std::endl;
using std::cin;
using std::cout;

void Battles::Battle() {
    Character character;
    CreatureStats creature;
    creature.getRandomCreatureStats();

    // system("COLOR 40");
    // cout << "hello world" << endl;

    //checking if the stats can be accessed.
    for (int i = 0; i < character.stats1.size(); i++){
        cout << character.stats1[i] << "; ";
    }
    cout << endl << endl;
    for (int i = 0; i < character.stats2.size(); i++){
        cout << character.stats2[i] << "; ";
    }
    cout << endl << endl;
    for (int i = 0; i < character.stats3.size(); i++){
        cout << character.stats3[i] << "; ";
    }
    cout << endl << endl;
}