// ternaryOperator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;


int main()
{
    double temp;
    char unit;

    cout << "**** Temperature conversion****\n";
    cout << "F = Fahrenheit\n";
    cout << "C = Celsius\n";
    cout << "What unit would you like to convert to: ";
    cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        cout << "enter the temp in Celsius: ";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "Temp is: " << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        cout << "enter the temp in Fahrenheit: ";
        cin >> temp;

        temp = (temp - 32.0) * 1.8;
        cout << "Temp is: " << temp << "C\n";
    }
    else
        cout << "Please enter either C or F\n";
    /*
    string fullName;
    int grade;

    cout << "Enter the full name: ";
    getline(cin >> std::ws, fullName);

    cout << "Enter the grade: ";
    cin >> grade;

    grade >= 60 ? cout << fullName << ", You pass!" : cout << "You fail!" << "\n";
    */
    return 0;
}

