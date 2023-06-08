#pragma once
#include <vector>
using std::string;
using std::vector;

class Character {
public:
    static vector<int> stats1;
    static vector<int> stats2;
    static vector<int> stats3;

    void Creation();
    void Spells();
    void Classes(int& classs);
    void Races(int& race);
    void StatCreation();
private:
    static vector<int> classStatsClass;       
    static int index;
    int race;
    int classs;
};