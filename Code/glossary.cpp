#include <iostream>
#include <vector>
#include "glossary.h"
#include "dice.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct CreatureStatss
{
    std::string name;
    int health;
    int attack;
    int defense;
    const std::string actions;

    std::string getName();
    int getHealth();
    int getAttack();
    int getDefense();
    std::string getActions();
};

std::string CreatureStatss::getName()
{
    return name;
}
int CreatureStatss::getHealth()
{
    return health;
}
int CreatureStatss::getAttack()
{
    return attack;
}
int CreatureStatss::getDefense()
{
    return defense;
}
std::string CreatureStatss::getActions()
{
    return actions;
}

void CreatureStats::getRandomCreatureStats()
{

    Dice dice;
    std::string name;
    std::string actions;
    int health;
    int attack;
    int defense;

    int index = 4;
    int result = std::rand() % index;

    switch (result)
    {
    case 1:
        name = "Dragon";
        actions = "Breathe Fire";
        health = 100;
        attack = dice.rollDice(4);
        defense = 30;
        break;
    case 2:
        name = "orc";
        actions = "orc strike";
        health = 30;
        attack = dice.rollDice(6);
        defense = 5;
        break;
    case 3:
        name = "Goblin";
        actions = "Goblin Punch";
        health = 20;
        attack = dice.rollDice(4);
        defense = 3;
    default:
        break;
    }

    std::cout << "Name: " << name << endl;
    std::cout << "Health: " << health << std::endl;
    std::cout << "Attack: " << attack << std::endl;
    std::cout << "Defense: " << defense << std::endl;
    std::cout << "Actions: " << actions << std::endl;
}
// implement the set value that can be randomized for variance; don't know how to make it random value