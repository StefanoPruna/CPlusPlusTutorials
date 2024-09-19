// whileLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    int rows;
    int columns;
    char symbol;

    cout << "How many rows? ";
    cin >> rows;

    cout << "How many columns? ";
    cin >> columns;

    cout << "What symbol to use? ";
    cin >> symbol;

    //Nested loop
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            cout << symbol;
        }
        cout << "\n";
    }

    /*
    string name;

    while(name.empty())
    {
        cout << "Enter your full name\n";
        getline(cin, name);
    }

    cout << "Hello " << name;

    do
    {
        cout << "Enter your name: ";
        getline(cin, name);
    } while (name.length() > 6);
    

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 20; j++)
        {
            if (i == 13)
                continue;//or break to stop the loop

            cout << j << " ";
        }
        cout << '\n';
    }
    */
}


