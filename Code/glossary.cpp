#include <iostream>
#include <vector>
#include "glossary.h"
#include "dice.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;

// struct CreatureStatss
// {
//     string name;
//     int health;
//     int attack;
//     int defense;
//     const string actions;

//     std::string getName();
//     int getHealth() const;
//     void setHealth(int newHealth); // Setter function
//     int getAttack();
//     int getDefense();
//     std::string getActions();
// } creatureStatss;
//     // string CreatureStats::name;
//     // int CreatureStats::health;
//     // int CreatureStats::attack;
//     // int CreatureStats::defense;
//     // string CreatureStats::actions;


// std::string CreatureStatss::getName()
// {
//     return name;
// }

// int CreatureStatss::getHealth() const {
//     return health;
// }
// void CreatureStatss::setHealth(int newHealth) {
//     health = newHealth;
// }

// int CreatureStatss::getAttack()
// {
//     return attack;
// }
// int CreatureStatss::getDefense()
// {
//     return defense;
// }
// std::string CreatureStatss::getActions()
// {
//     return actions;
// }

// std::string CreatureStats::getName()
// {
//     return name;
// }
// int CreatureStats::getHealth() 
// {
//     return health;
// }
// int CreatureStats::getAttack()
// {
//     return attack;
// }
// int CreatureStats::getDefense()
// {
//     return defense;
// }
// std::string CreatureStats::getActions()
// {
//     return actions;
// }

void CreatureStats::getRandomCreatureStats()
{
    Dice dice;
    // std::string name;
    // std::string actions;
    // int health;
    // int attack;
    // int defense;

    int index = 2;
    int result = std::rand() % index;

    switch (result)
    {
    case 0:
        name = "Dragon";
        health = 50;
        attack = dice.rollDice(11);
        defense = 30;
        actions = "Breathe Fire";
        break;
    case 1:
        name = "Orc";
        health = 30;
        attack = dice.rollDice(8);
        defense = 5;
        actions = "Orc Strike";
        break;
    case 2:
        name = "Goblin";
        health = 20;
        attack = dice.rollDice(6);
        defense = 3;
        actions = "Goblin Punch";
    default:
        break;
    }

    // std::cout << "Name: " << name << endl;
    // std::cout << "Health: " << health << std::endl;
    // std::cout << "Attack: " << attack << std::endl;
    // std::cout << "Defense: " << defense << std::endl;
    // std::cout << "Actions: " << actions << std::endl;
}