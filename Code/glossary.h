#ifndef GLOSSARY_H
#define GLOSSARY_H

#include <string>

// Class to hold average stats and actions for creatures
class CreatureStats {
public:
    CreatureStats(const std::string& name, int health, int attack, int defense, const std::string& actions);

    // get methods
    std::string getName() const;
    int getHealth() const;
    int getAttack() const;
    int getDefense() const;
    std::string getActions() const;

private:
    std::string name;
    int health;
    int attack;
    int defense;
    std::string actions;
};



#endif  // GLOSSARY_H
