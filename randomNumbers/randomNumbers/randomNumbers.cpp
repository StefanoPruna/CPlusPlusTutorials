// randomNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    //for random numbers, add #include <ctime>
    //These are pseudo-random, so they aren't truly random numbers
    
    /*srand(time(NULL));

    int num = (rand() % 6) + 1; //this line of code will give us a random number between 1 and 6
    int num = (rand() % 20) + 1;
    cout << num;
    */
    
    /*
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    cout << num1 << " " << num2 << " " << num3 << "\n";
    */

    //Create a random event
    /*srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        cout << "You won a health potion\n";
        break;
    case 2:
        cout << "You won a stamina potion\n";
        break;
    case 3:
        cout << "You found a sword +1\n";
        break;
    case 4:
        cout << "You found a health potion +2\n";
        break;
    case 5:
        cout << "You found 100 gold\n";
        break;
    }
    */

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "**** NUMBER TO GUESS GAME ****\n";

    do
    {
        cout << "Enter a number to guess between 1 and 100: ";
        cin >> guess;
        tries++;

        if (guess > num)
            cout << "Too high\n";
        else if (guess < num)
            cout << "Too low\n";
        else
            cout << "Correct! you needed tries: " << tries << "\n";
    } while (guess != num);

    cout << "**** END OF THE GAME ****\n";

    return 0;
}


