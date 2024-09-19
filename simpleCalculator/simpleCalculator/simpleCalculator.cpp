// simpleCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//using namespace std;
using std::cout; 
using std::cin;

int main()
{
    char op;
    double num1, num2, result;

    cout << "********** CALCULATOR **********\n";

    cout << "enter either (+ - * /): " << "\n";
    cin >> op;

    if (op != '+' && op != '-' && op != '*' && op != '/')
        cout << "Please inster a correct operator";
    else
    {
        cout << "Enter #1: ";
        cin >> num1;

        cout << "Enter #2: ";
        cin >> num2;

        cout << "*****************" << "\n";

        switch (op)
        {
        case '+':
            result = num1 + num2;
            cout << "The result is " << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            cout << "The result is " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            cout << "The result is " << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            cout << "The result is " << result << "\n";
            break;
        default:
            cout << "Please insert a correct operator";
            break;
        }
    }
    
    return 0;
}


