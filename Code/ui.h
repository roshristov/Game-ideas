#pragma once
#include <string.h>

class UserInterface {
public:
    char Interface (std::ostream &cout, char& text);
private:
    char text;
};