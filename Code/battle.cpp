#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include "battle.h"
#include "glossary.h"
#include "character.h"
#include "dice.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;

void Battles::Battle()
{
    Character character;
    CreatureStats creature;
    creature.getRandomCreatureStats();

    // system("COLOR 40");
    // cout << "hello world" << endl;

    // checking if the stats can be accessed.
    // cout << character.name1 << ": ";
    // for (int i = 0; i < character.stats1.size(); i++) {
    //     cout << character.stats1[i] << "; ";
    // }
    // cout << endl << endl;

    // cout << character.name2 << ": ";
    // for (int i = 0; i < character.stats2.size(); i++) {
    //     cout << character.stats2[i] << "; ";
    // }
    // cout << endl << endl;

    // cout << character.name3 << ": ";
    // for (int i = 0; i < character.stats3.size(); i++) {
    //     cout << character.stats3[i] << "; ";
    // }
    // cout << endl << endl;

    Dice dice;

    cout << "You see a " << creature.name << " standing before you. You prepare to battle!" << endl;

    // Start the battle
    bool isCharacterTurn = true; // Flag to keep track of whose turn it is
    while (character.stats1.at(7) > 0 && character.stats2.at(7) > 0 && character.stats3.at(7) > 0 && creature.health > 0) { // Continue the battle until either the characters or enemy's health reaches 0
        if (isCharacterTurn)
        {
            int damage;
            string input;

            // Character's turn to attack
            if (character.stats1.at(7) >= 0) {
                cout << "Roll the dice for the " << character.name1 << "'s attack. (press any button)" << endl;
                cin >> input;
                if (character.name1 == "Barbarian") { // barbarian
                    damage = dice.rollDice(12);
                } else if (character.name1 == "Cleric") { // cleric
                    damage = dice.rollDice(6);
                } else if (character.name1 == "Paladin") { // paladin
                    damage = dice.rollDice(8);
                }
                creature.health -= damage; // Reduce creature's health by the damage
                cout << "You rolled a " << damage << ", so you deal " << damage << " damage to the " << creature.name << "." << endl << endl;
            }


            if (character.stats2.at(7) >= 0) {
                cout << "Roll the dice for the " << character.name2 << "'s attack. (press any button)" << endl;
                cin >> input;
                if (character.name2 == "Barbarian") { // barbarian
                    damage = dice.rollDice(12);
                } else if (character.name2 == "Cleric") { // cleric
                    damage = dice.rollDice(6);
                } else if (character.name2 == "Paladin") { // paladin
                    damage = dice.rollDice(8);
                }
                creature.health -= damage; // Reduce creature's health by the damage
                cout << "You rolled a " << damage << ", so you deal " << damage << " damage to the " << creature.name << "." << endl << endl;
            }


            if (character.stats3.at(7) >= 0) {
                cout << "Roll the dice for the " << character.name3 << "'s attack. (press any button)" << endl;
                cin >> input;
                if (character.name3 == "Barbarian") { // barbarian
                    damage = dice.rollDice(12);
                } else if (character.name3 == "Cleric") { // cleric
                    damage = dice.rollDice(6);
                } else if (character.name3 == "Paladin") { // paladin
                    damage = dice.rollDice(8);
                }
                creature.health -= damage; // Reduce creature's health by the damage
                cout << "You rolled a " << damage << ", so you deal " << damage << " damage to the " << creature.name << "." << endl << endl;
            }
        }
        else
        {
            // Creature's turn to attack
            int damage;
            if (creature.name == "Dragon") {
                damage = dice.rollDice(8);
            } else if (creature.name == "Orc") {
                damage = dice.rollDice(6);
            } else if (creature.name == "Goblin") {
                damage = dice.rollDice(4);
            }

            int index = 2;
            int result = std::rand() % index;
            switch (result)
            {
            case 0:
                character.stats1.at(7) -= damage; // Reduce character's health by the damage
                cout << "The " << creature.name << " attacks the " << character.name1 << ", by dealing " << damage << " damage." << endl;
                break;
            case 1:
                character.stats2.at(7) -= damage; // Reduce character's health by the damage
                cout << "The " << creature.name << " attacks the " << character.name2 << ", by dealing " << damage << " damage." << endl;
                break;
            case 2:
                character.stats3.at(7) -= damage; // Reduce character's health by the damage
                cout << "The " << creature.name << " attacks the " << character.name3 << ", by dealing " << damage << " damage." << endl;
                break;
            default:
                break;
            }
        }

        // Print updated health after the attack
        cout << endl;
        cout << "Character Health to " << character.name1 << ": " << character.stats1.at(7) << endl;
        cout << "Character Health to " << character.name2 << ": " << character.stats2.at(7) << endl;
        cout << "Character Health to " << character.name3 << ": " << character.stats3.at(7) << endl;
        cout << creature.name << ": still alive." << endl;
        cout << endl;

        // Switch turns
        isCharacterTurn = !isCharacterTurn;
    }

    // Determine the winner
    if (character.stats1.at(7) <= 0 && character.stats2.at(7) <= 0 && character.stats3.at(7) <= 0)
    {
        cout << "The" << creature.name << " wins! GAME OVER!" << endl;
        std::this_thread::sleep_for (std::chrono::seconds(5));  // a small pause before the program closes.
        throw std::runtime_error("Exiting game...");   //made for closing the program
    }
    else
    {
        cout << "You win!" << endl << endl;
    }
}