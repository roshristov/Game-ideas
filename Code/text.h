#pragma once

class Text {
public:
    void Story(int& order);
    void Interactions(int& sort);
private:
    int order;
    int sort;  //the sort of interaction (enemy, shop, whatever else)
};