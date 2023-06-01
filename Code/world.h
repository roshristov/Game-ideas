#ifndef WORLD_H
#define WORLD_H

#include <string>

class World {
public:
    void showOptions();
    bool isValidOption(int choice);
    void promptInvalidOption();
    void handleChoice(int choice);
    void visitVillage();
    void visitDungeon();
    void buyStuff();
    void fightEnemies();
};

#endif
