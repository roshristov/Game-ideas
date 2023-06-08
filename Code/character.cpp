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
    Character classes;
    Character races;
    Character stats;

    for (int i = 0; i < 3; i++) {
        beginningClass:
        cout << "Write the number of the class that you want your character to be out of the ones listed below." << endl;
        cout << "1. Barbarian." << endl;
        cout << "2. Cleric." << endl;
        cout << "3. Paladin." << endl;
        cin >> classs;
        if (classs != 1 && classs != 2 && classs !=3) {
            cout << "Invalid option. Please try again." << endl;
            goto beginningClass;    //i know i shouldn't use goto, i'm just too tired to figure out a better way to do this.
        } else {
            classes.Classes(classs);
        }

        beginningRace:
        cout << "Write the number of the race that you want your character to be." << endl;
        cout << "1. Human." << endl;
        cout << "2. Elf." << endl;
        cout << "3. Gnome." << endl;
        cout << "4. Dragonborn." << endl;
        cin >> race;
        if (race != 1 && race != 2 && race != 3 && race != 4) {
            cout << "Invalid option. Please try again." << endl;
            goto beginningRace;     //again, too tired to figure it out. at least it works.
        } else {
            races.Races(race);
        }

        cout << "These are your stats:" << endl;
        stats.StatCreation();
        index++;
    }

    //show off the stats

    //there is a carrying capacity, which is the strength score multiplyed by 15.
    //an example: stregth score = 13; 13 * 15 = 195. you can carry 195 pounds of stuff.
}

vector<int> Character::classStatsClass(0);  //initialization of the static data.
int Character::index = 0;
vector<int> Character::stats1(0);
vector<int> Character::stats2(0);
vector<int> Character::stats3(0);
int Character::classs = 0;

void Character::StatCreation() {

    if (index == 0) {
        //stats1
        stats1.push_back(classStatsClass.at(0));
        stats1.push_back(classStatsClass.at(1));
        stats1.push_back(classStatsClass.at(2));
        stats1.push_back(classStatsClass.at(3));
        stats1.push_back(classStatsClass.at(4));
        stats1.push_back(classStatsClass.at(5));
        for (int i = 0; i < stats1.size(); i++){
            cout << stats1[i] << "; ";
        }
        cout << endl << "Strength; Dexterity; Constitution; Inteligence; Wisdom; Charisma;" << endl << endl;
        //carying capacity:
        stats1.push_back(stats1.at(0) * 15);

        //hp (health points):
        //12 plus 2 for barbarian; 8 plus 2 for cleric; 10 plus 2 for paladin. (the 'plus _' changes depending on the
        //constitution level, but for now, we don't have to worry about that)
        if(classs == 1) {   //barbarian
            stats1.push_back(14);
        } else if(classs == 2) {    //cleric
            stats1.push_back(10);
        } else if(classs == 3) {    //paladin
            stats1.push_back(12);
        } 
        classStatsClass.clear();
    }

    if (index == 1) {
        //stats2
        stats2.push_back(classStatsClass.at(0));
        stats2.push_back(classStatsClass.at(1));
        stats2.push_back(classStatsClass.at(2));
        stats2.push_back(classStatsClass.at(3));
        stats2.push_back(classStatsClass.at(4));
        stats2.push_back(classStatsClass.at(5));
        for (int i = 0; i < stats2.size(); i++){
            cout << stats2[i] << "; ";
        }
        cout << endl << "Strength; Dexterity; Constitution; Inteligence; Wisdom; Charisma;" << endl << endl;
        //carying capacity:
        stats2.push_back(stats2.at(0) * 15);

        //hp (health points):
        //12 plus 2 for barbarian; 8 plus 2 for cleric; 10 plus 2 for paladin. (the 'plus _' changes depending on the
        //constitution level, but for now, we don't have to worry about that)
        if(classs == 1) {   //barbarian
            stats2.push_back(14);
        } else if(classs == 2) {    //cleric
            stats2.push_back(10);
        } else if(classs == 3) {    //paladin
            stats2.push_back(12);
        } 
        classStatsClass.clear();
    }

    if (index == 2) {
        //stats3
        stats3.push_back(classStatsClass.at(0));
        stats3.push_back(classStatsClass.at(1));
        stats3.push_back(classStatsClass.at(2));
        stats3.push_back(classStatsClass.at(3));
        stats3.push_back(classStatsClass.at(4));
        stats3.push_back(classStatsClass.at(5));
        for (int i = 0; i < stats3.size(); i++){
            cout << stats3[i] << "; ";
        }
        cout << endl << "Strength; Dexterity; Constitution; Inteligence; Wisdom; Charisma;" << endl << endl;
        //carying capacity:
        stats3.push_back(stats3.at(0) * 15);

        //hp (health points):
        //12 plus 2 for barbarian; 8 plus 2 for cleric; 10 plus 2 for paladin. (the 'plus _' changes depending on the
        //constitution level, but for now, we don't have to worry about that)
        if(classs == 1) {   //barbarian
            stats3.push_back(14);
        } else if(classs == 2) {    //cleric
            stats3.push_back(10);
        } else if(classs == 3) {    //paladin
            stats3.push_back(12);
        } 
        classStatsClass.clear();
    }
}

void Character::Classes(int& classs) {
    //will have the class specific stats, items and abilities. will call items.cpp.

    switch (classs) {
        case 1: //barbarian
            //optimal stats
            classStatsClass.push_back(15);    //strength
            classStatsClass.push_back(14);    //dexterity
            classStatsClass.push_back(14);    //constitution
            classStatsClass.push_back(8);     //inteligence
            classStatsClass.push_back(10);    //wisdom 
            classStatsClass.push_back(10);    //charisma
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
}

void Character::Races(int& race) {
    //will have the different species, with their different modifiers.

    switch (race) {
        case 1:
            classStatsClass.at(0) += 1;
            classStatsClass.at(1) += 1;
            classStatsClass.at(2) += 1;
            classStatsClass.at(3) += 1;
            classStatsClass.at(4) += 1;
            classStatsClass.at(5) += 1;
            //human:
            //+1 to all ability scores.
            break;
        case 2:
            classStatsClass.at(1) += 2;
            //elf:
            //+2 dexterity.
            
            break;
        case 3:
            classStatsClass.at(3) += 2;
            //gnome:
            //+2 intelligence
            
            break;
        case 4:
            classStatsClass.at(0) += 2;
            classStatsClass.at(5) += 1;
            //dragornborn:
            //+2 strength and +1 charisma

            break;
        default:
            cout << "Invalid race." << endl;
            break;
    }
}

void Character::Spells() {
    //will have the spells of specific classes.

    //cleric
    //Cure Wounds = heals 1d8 amount of health.
    //Death Ward = if a character's health falls to zero, they don't die and their health sets at 1, but the spell ends.
    //Guiding Bolt = deals 4d6 damage.

    //paladin
    //Cure Wounds = heals 1d8 amount of health.
}
