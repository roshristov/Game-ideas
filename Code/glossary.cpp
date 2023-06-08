#include <iostream>
#include <vector>
#include "glossary.h"

CreatureStats::CreatureStats(const std::string& name, int health, int attack, int defense, const std::string& actions)
    : name(name), health(health), attack(attack), defense(defense), actions(actions) {}

std::string CreatureStats::getName() const {
    return name;
}

int CreatureStats::getHealth() const {
    return health;
}

int CreatureStats::getAttack() const {
    return attack;
}

int CreatureStats::getDefense() const {
    return defense;
}

std::string CreatureStats::getActions() const {
    return actions;
}

CreatureStats getRandomCreatureStats() {
    std::vector<CreatureStats> creatures{
        CreatureStats("Goblin", 20, 5, 3, "Goblin Punch"),
        CreatureStats("Orc", 30, 8, 5, "Orc Strike"),
        CreatureStats("Dragon", 100, 15, 10, "Dragon Breath")
        // Add more creatures 
    };

    int index = 3;
    int result = std::rand() % index;
    return creatures[result];
}
//implement the set value that can be randomized for variance; don't know how to make it random value