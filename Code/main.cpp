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

int main() {
	int a = 1;
    int b=8;
    cout<<"test:"<<b<<endl;
    //cout << dye::aqua("test: ") << a << endl;
    cout << "test: " << a << endl;
	std::this_thread::sleep_for (std::chrono::seconds(5));
    return 0;
}
