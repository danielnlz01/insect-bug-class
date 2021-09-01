#include <iostream>
#include "Bug.h"

using namespace std;

int main() 
{
	Bug *b = new Bug();
	cout << "bug 1" << endl;
	cout << "positive numbers move to the right, negative to the left..." << endl;
	cout << "position: " << b->getPosition() << endl;
	b->setPosition(10);
	cout << "position: " << b->getPosition() << endl;
	b->move();
	cout << "position: " << b->getPosition() << endl;
	b->move();
	cout << "position: " << b->getPosition() << endl;
	b->turn();
	cout << "position: " << b->getPosition() << endl;
	b->move();
	cout << "position: " << b->getPosition() << endl;
	
  return 0;
}