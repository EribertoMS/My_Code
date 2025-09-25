/* Author: Eriberto Muro Sonora
   E-mail: eribertomuro@gmail.com
   Date Started: 30 May, 2024
   Last Modified: 12 June, 2024
   Times Worked on: 01 June, 2024 9:00PM - 9:56PM
		   	   		12 June, 2024 2:10PM - 3:00PM
				    13 June, 2024 1:35PM - 2:05PM
   This program will attempt to demonstrate Kirchoff's Voltage Law. KVL is characterized as the sum of
   voltages in a loop. The loop "components" can be either voltage sources OR load sources. For now I
   will focus soley on voltage sources and resistive sources and will advance further in a updated ve-
   rsion of this program.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << endl;
	cout << "+ ----------------------------------------------------------------------------- +" << endl;
	cout << "| This program demonstrates Kirchoff's Voltage Law. The idea is that there are  |" << endl;
	cout << "| loops when designing circuits. Each loop should have a net voltage of zero th-|" << endl;
	cout << "| -at is the voltage drop(-) should equal the voltage high(+). This program att-|" << endl;
	cout << "| -empts to aid in the calculation of a SINGLE looped circuit. It will calculat-|" << endl;
	cout << "| -e a missing voltage for a \"component\" should that component be missing vol-|" << endl;
	cout << "| -tage information.					                            			 |" << endl;
	cout << "+ ----------------------------------------------------------------------------- +" << endl;
	cout << endl;


	char quit;
	int num_sources;
	int i;
	float voltage[i+1];
	float total_voltage = 0;

	
	do
	{
		cout << "How many sources are there in the loop?: ";
		cin >> num_sources;
		
		for(i = 1; i <= num_sources; i++)
		{
			cout << "Voltage value of source " << i << ": ";
			cin >> voltage[i];
			
			if(voltage[i] == 0)
			{
				cout << "The Voltage is not known for this source." << endl;
			}
			total_voltage = total_voltage + voltage[i];
		}
/*
		for(i = 1; i <= num_sources; i++)
		{
			cout << voltage[i] << "\t";
		}
*/
		if((total_voltage < 0) || (total_voltage > 0))
		{
			cout << "ERROR!: TOTAL DOES NOT EQUAL ZERO!";
			
			break;
		}
				
		cout << endl;
		cout << "total_voltage should be zero: " << total_voltage << endl;
		cout << "Would you like to continue?(Y/y) or anything else for no: ";
		cin >> quit;

	}while(quit == 'y' || quit == 'Y');
	return 0;
}
