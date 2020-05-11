#include <iostream>
#include "Glass.h"
using namespace glassspace;
using namespace std;

int main()
{
	Glass c1(200, 50);
	Glass c2;
	cout << "Glass c1 and c2 created...\n";

	int cCapacity, cVolume;
    cout << "Enter the capacity for the new Glass object:\n";
	cin >> cCapacity;
	cout << "Enter the volume for the new Glass object:\n";
	cin >> cVolume;

	c2.setCapacity(cCapacity);
	c2.setVolume(cVolume);

	if (c1 == c2) {
		cout << "\nc1 and c2 are the same...\n\n";
	}

	else {
		cout << "\nc1 and c2 are different..\n\n";
	}

	Glass c3;
	cout << "Glass c3 created...\n\n";
	
	c3 = c1 + c2;

	cout << "c3's capacity is " << c3.getCapacity() << " and its volume is " << c3.getVolume();
	cout << "\n\n";
}

