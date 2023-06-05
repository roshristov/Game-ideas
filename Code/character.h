#pragma once
#include <vector>
using std::string;
using std::vector;

class Character {
public:
    void Creation();
    void Stats();
    void Spells();
    vector<int> Classes(int& classs);
    vector<int> Races(int& race);
private:
    string race;
    string classs;
};