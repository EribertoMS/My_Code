/* This program calculates the total resistance of a series circuit */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int numResistors;
	float totalResistance = 0;
	float resistanceValue;
	int i;

	cout << "How many resistors are there?: ";
	cin >> numResistors;

	for(i = 1;i <= numResistors; i++)
	{
		cout << "Resistor Value " <<  i << " is: ";
		cin >> resistanceValue;

		totalResistance = totalResistance + resistanceValue;
	}

	cout << "Total Resistance in series is: " << totalResistance << " Ohms" << endl;

	return 0;

}