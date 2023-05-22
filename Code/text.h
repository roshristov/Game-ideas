#pragma once
#include <string.h>

class Text {
public:
    void Story(int& order);
    char Interactions(char& sort);
private:
    int order;
    char sort;  //the sort of interaction (enemy, shop, whatever else)
};