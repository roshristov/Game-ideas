#include <iostream> 
#include "character.h"
#include <vector>
using std::endl;
using std::cin;
using std::cout;
using std::string;
using std::vector;

void Character::Creation() {
    //will have the process of creating your characters.

    for (int i = 0; i < 3; i++) {   //3 times for 3 characters
        int classs;
        cout << "write what class you want your character to be out of the ones listed below." << endl;
        cout << "1. Barbarian." << endl;
        cout << "2. Cleric." << endl;
        cout << "3. Paladin." << endl;
        cin >> classs;
        Character classes;
        classes.Classes(classs);

        int race;
        cout << "write what race you want your character to be." << endl;
        cout << "1. Human." << endl;
        cout << "2. Elf." << endl;
        cout << "3. Gnome." << endl;
        cout << "4. Dragonborn." << endl;
        cin >> race;
        Character races;
        races.Races(race);

        cout << "these are your stats." << endl;
    }
    //show of the stats

    //there is a carrying capacity, which is the strength score multiplyed by 15.
    //an example: stregth score = 13; 13 * 15 = 195. you can carry 195 pounds of stuff.
    return;
}

void Character::Stats() {
    //will store the stats of the characters.

    vector<int> stats;
    //the stats will have: strength; dexterity; constitution; inteligence; wisdom; charisma; carrying capacity;
    //adding exp would be too difficult to do now.

    return;
}

vector<int> Character::Classes(int& classs) {
    //will have the class specific stats, items and abilities. will call items.cpp.

    vector<int> classStatsClass;

    switch (classs) {
        case 1: //barbarian
            //optimal stats
            classStatsClass.push_back(15);    //strength
            classStatsClass.push_back(14);    //dexterity
            classStatsClass.push_back(14);    //constitution
            classStatsClass.push_back(8);     //inteligence
            classStatsClass.push_back(10);    //wisdom 
            classStatsClass.push_back(10);    //charisma
            cout << "test111" << endl;
            //barbarian:    damage class
            //equipment - greataxe; two handaxes; an explorer's pack(includes a backpack, a bedroll,
            //a tinderbox, 10 torches, 10 days of rations, and a waterskin.); four javelins.
            //modifiers - none
            break;
        case 2:
            //optimal stats
            classStatsClass.push_back(8);     //strength
            classStatsClass.push_back(14);    //dexterity
            classStatsClass.push_back(14);    //constitution
            classStatsClass.push_back(8);     //inteligence
            classStatsClass.push_back(15);    //wisdom 
            classStatsClass.push_back(12);    //charisma
            cout << "test222" << endl;
            //cleric:       healer class
            //equipment - a mace; scale mail; a light crossbow; 20 bolts; an explorer's pack(includes a backpack, a bedroll,
            //a tinderbox, 10 torches, 10 days of rations, and a waterskin.); a holy symbol.
            //modifiers - none
            break;
        case 3:
            //optimal stats
            classStatsClass.push_back(15);    //strength
            classStatsClass.push_back(8);     //dexterity
            classStatsClass.push_back(15);    //constitution
            classStatsClass.push_back(8);     //inteligence
            classStatsClass.push_back(8);     //wisdom 
            classStatsClass.push_back(15);    //charisma
            cout << "test333" << endl;
            //paladin:      //tank class
            //equipment - longsword; a shield; five javelins; an explorer's pack(includes a backpack, a bedroll,
            //a tinderbox, 10 torches, 10 days of rations, and a waterskin.); chain mail; a holy symbol.
            //modifiers - none
            break;
        default:
            cout << "Invalid class." << endl;
            break;
    }

    //there can be more classes, but for now, these are the most necesary to have.
    return classStatsClass;
}

vector<int> Character::Races(int& race) {
    //will have the different species, with their different modifiers.

    vector<int> classStatsRace;

    switch (race) {
        case 1:
            //human:
            //+1 to all ability scores.
            
            break;
        case 2:
            //elf:
            //+2 dexterity.
            
            break;
        case 3:
            //gnome:
            //+2 intelligence
            
            break;
        case 4:
            //dragornborn:
            //+2 strength and +1 charisma

            break;
        default:
            cout << "Invalid race." << endl;
            break;
    }

    return classStatsRace;
}

void Character::Spells() {
    //will have the abilities and actions of the classes.

    //cleric
    //Cure Wounds = heals 1d8 amount of health.
    //Death Ward = if a character's health falls to zero, they don't die and their health sets at 1, but the spell ends.
    //Guiding Bolt = deals 4d6 damage.

    //paladin
    //cure wounds = heals 1d8 amount of health.

    return;
}
