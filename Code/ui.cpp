#include <ostream>
#include "ui.h"
// using std::cout;
// using std::endl;

UserInterface::Interface(std::ostream &cout, char &text) {
    text = "---test---";
    cout << text << endl;
}