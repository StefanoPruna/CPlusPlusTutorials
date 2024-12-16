// Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//Factorial function
/*
Factorial of 6 = 6*5*4*3*2*1
*/

int iterativeFactorial(int num);
int recursiveFactorial(int num);

int main()
{
    cout << iterativeFactorial(10);
    cout << "\n";
    cout << recursiveFactorial(10);

    return 0;
}
//Iterative approach
int iterativeFactorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    return result;
}
//Recursive approach, it takes more memory and it's slower
int recursiveFactorial(int num)
{
    if (num > 1)
        return num * recursiveFactorial(num - 1);
    else
        return 1;
}

/*
void walk(int steps);

int main()
{
    int steps;
    std::cout << "How many steps do you take?\n";
    cin >> steps;
    walk(steps);

    return 0;
}

void walk(int steps)
{
    //Iterative approach
    for (int i = 0; i < steps; i++)
    {
        cout << "You take a step\n";
    }
    //Recursive approach, it takes more memory and it's slower
    if (steps > 0)
    {
        cout << "you take a step\n";
        walk(steps - 1);
    }        

    ////Stack Overflaw, when we get into an infinite loop
    //cout << "you take a step\n";
    //walk(steps);    
}
*/
