// fizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;

void fizzBuzz(int n)
{
    try
    {
        for (int number = 1; number <= n; i++)
        {
            if (number % 3 == 0 || number % 5 == 0)
                cout << "FizzBuzz";
            else if (number % 3 == 0)
                cout << "Fizz";
            else if (number % 5 == 0)
                cout << "Buzz";
            else if (number % 3 != 0 || number % 5 != 0)
                cout << number;
        }
    }
    catch (int number)
    {
        cout << "You have not inserted the correct number\n";
    }
}

int main()
{
    int number;
    cout << "****\n";
    cout << "Enter the number:\n";
    cin >> number;

    fizzBuzz(number);
    
    return 0;
}


