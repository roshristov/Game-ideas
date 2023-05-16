#include <iostream>
//#include <iomanip>
//#include <bits/stdc++.h>
//using namespace std;
//#include "C:\\dev\\Game-ideas\\color-console\\include\color.hpp"	//can't get it to work.
//using namespace dye;
//using namespace hue;
#include <thread>
#include <chrono>
using std::cin;
using std::cout;
using std::endl;
#include "ui.h"

int main() {
	int a = 1;
    //cout << dye::aqua("test: ") << a << endl;
    cout << "test: " << a << endl;
    UserInterface interface;
    char text;
    interface.Interface(cout, text);
	std::this_thread::sleep_for (std::chrono::seconds(5));
    return 0;
}
