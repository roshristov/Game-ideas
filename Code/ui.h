#pragma once
#include <string.h>
#include <ostream>

class UserInterface {
public:
    char Interface(std::ostream &cout, char& text);
private:
    char text;
};