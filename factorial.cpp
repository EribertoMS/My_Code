/* Author: Eriberto Muro Sonora
   E-mail: eribertomuro@gmail.com
   Date Created: 14 June, 2024
   Last Modified: 14 June, 2024
   Times Worked on: 9:38AM - 10:30AM 14 June, 2024
					8:24PM - 8:54PM  14 June, 2024
   Description: This program will attempt to demonstrate the principle of factorials. A factorial 
				is a number multiplied by itself and the previous numbers in order. For example...
				1! = 1
				2! = 1 x 2
				...
				10! = 1 x 2 x 3 x 4 x 5 x 6 x 7 x 8 x 9 x 10
*/

#include <iostream>
using namespace std;

//int factorial_function(int a);
int factorial_function(int a)
{
	int answer = 1;
	int i;
	
	for(i = 1;i <= a;i++)
	{
		answer = i * answer;
	}
	
	return answer;
}

int main()
{
	int a;
	int ans;
	
	cout << "Enter the factorial you wish to find: ";
	cin >> a;
	
	cout << "You want to find the " << a << "! factorial\n";
	
	ans = factorial_function(a);
	
	cout << "The factorial of " << a << "! is " << ans << endl;
	
	return 0;
}


