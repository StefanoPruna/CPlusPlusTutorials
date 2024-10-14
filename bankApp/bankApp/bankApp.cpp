// bankApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <stdexcept>

using std::cout;
using std::cin;
using std::string;
using std::fixed;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do
    { 
        cout << "**********\n";
        cout << "Enter your choice:\n";
        cout << "**********\n\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cin >> choice;

        cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            if (balance <= 0)
                cout << "You cannot withdraw that amount, because your balance will be less than 0\n";
            else if (balance - withdraw(balance) < 0)
                cout << "You cannot withdraw that amount, because your balance will be less than 0\n";
            else if (balance - withdraw(balance) >= 0)
            {
                balance -= withdraw(balance);
                showBalance(balance);
            }                
            break;
        case 4:
            cout << "Thanks for visiting us, come again!\n";
            break;
        default:
            cout << "Invalid input selected!\n";                     
        }
    } while (choice != 4);
    
    return 0;
}

void showBalance(double balance)
{
    //By adding #include <iomanip> you can display the decimal points
    cout << "Your balance is: AUD $" << std::setprecision(2) << std::fixed << balance << "\n";
}

double deposit()
{
    double amount;
    cout << "Enter the amount to be deposited: $";
    cin >> amount;

    if (amount > 0)
        return amount;
    else
    {
        cout << "That's not a valid amount\n";
        return 0;
    }    

    return amount;
}

double withdraw(double balance)
{
    double amount;
    cout << "Enter the amount to be withdrawn: $";
    cin >> amount;
    
    return amount;
}
