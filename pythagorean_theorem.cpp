/* Author: Eriberto Muro Sonora
   E-mail: eribertomuro@gmail.com
   Date Created: 13 June, 2024
   Last Modified: 13 June, 2024
   Times Worked on: 6:41PM - 7:58PM
   Description: This program demonstrates the pythagorean theorem which is the famous equation
                a^2 + b^2 = c^2 which helps determine the hypotenuse (c), or any missing side of a 
                right triangle.
*/
#include <iostream>
#include <cmath>
using namespace std;

/*
	Here is the actual function itself. And so I think functions work like this...
	1. The compiler recognizes the function declaration at the top...
	2. The compiler then starts to execute the program top to bottom starting at the int main()
	   recognizing the variables and outputs and inputs...
	3. Once the function is called as shown above the compiler then goes to the function definition 
       here at the bottom and uses that to execute said function...
	4. The function returns a value and the compiler uses that value to execute the rest of the
	   program...
*/
// This is the function definition...
double pythagorean_theorem(double a, double b)
{
	double c;
	
	c = pow(a,2) + pow(b,2);
	
	return c;
}

int main()
{
	double a, b, c;
	
	cout << endl;
	cout << "------------------------------------------------------------------------------\n";
	cout << "This program performs the pythagorean thoerem to determine c the hypotenuse...\n";
	cout << "------------------------------------------------------------------------------\n";
	cout << endl;
		
	cout << "Enter side a: ";
	cin >> a;
	
	cout << "Enter side b: ";
	cin >> b;
	
	// This is where we call the function to be used...
	c = pythagorean_theorem(a,b);

	cout << "The hypotenuse is " << sqrt(c) << endl;
	cout << endl;
	return 0;
}
//This is the function decleration. This lets the compiler know that we have a function to use...
double pythagorean_theorem(double a, double b);
