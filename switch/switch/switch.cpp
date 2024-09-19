// switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int month;
	cout << "Enter the month 1-3: " << "\n";
	cin >> month;

	switch(month)
	{
		case 1:
			cout << "It's 1";
			break;
		case 2:
			cout << "It's 2";
			break;
		case 3:
			cout << "it's 3";
			break;
		default:
			cout << "Please enter a number between 1 to 3";
	}
	return 0;
}


