
#ifndef GLOSSARY_H
#define GLOSSARY_H
#include <string>
#include <vector>

// Class to hold average stats and actions for creatures
class CreatureStats {
public:
    void getRandomCreatureStats();
    // std::string getName();
    // int getHealth();
    // int getAttack();
    // int getDefense();
    // std::string getActions();

    std::string name;
    int health;
    int attack;
    int defense;
    std::string actions;
};

#endif  // GLOSSARY_H
