#include <iostream> 
#include <ostream>

using std::cin;
using std::cout;
using std::endl;
#include "ui.h"

int main() {
	int a = 1;
    int b=8;
    cout<<"test:"<<b<<endl;
    //cout << dye::aqua("test: ") << a << endl;
    cout << "test: " << a << endl;
    UserInterface interface;
    char text;
    interface.Interface(cout, text);
	return 0;
}
