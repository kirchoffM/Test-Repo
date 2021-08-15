// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	auto myScreen = Screen{6,6};
	myScreen.clear(' ');

	myScreen.home();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');

	myScreen.home();
	myScreen.forward();
	myScreen.down();
	myScreen.set('*');

	myScreen.home();
	myScreen.forward();
	myScreen.forward();
	myScreen.down();
	myScreen.down();
	myScreen.set('*');

	myScreen.home();
	myScreen.forward();
	myScreen.forward();
	myScreen.forward();
	myScreen.down();
	myScreen.down();
	myScreen.set('*');

    myScreen.home();
	myScreen.forward();
	myScreen.forward();
	myScreen.forward();
	myScreen.forward();
	myScreen.down();
	myScreen.set('*');

	myScreen.home();
	myScreen.forward();
	myScreen.forward();
	myScreen.forward();
	myScreen.forward();
	myScreen.forward();
	myScreen.set('*');
	//myScreen.down();
	myScreen.home();
	myScreen.forward();
	myScreen.forward();
	myScreen.forward();
	myScreen.forward();
	myScreen.forward();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');

	myScreen.display();
	cout << endl;

	return 0;
}

