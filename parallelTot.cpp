#include <iostream>
using namespace std;

int main()
{
	int numResistors;
	float resistorValue;
	float parallelTotal = 0;
	int i;

	cout << "Enter the number of resistors: ";
	cin >> numResistors;

	for(i = 1;i <= numResistors;i++)
	{
		cout << "Enter resistor value " << i << ": ";
		cin >> resistorValue;

		parallelTotal = parallelTotal + (1/resistorValue);

	}

	parallelTotal = 1/parallelTotal;
	cout << "The parallel total of the resistors is: " << parallelTotal << " Ohms" << endl;
	return 0;
}
