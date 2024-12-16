// DynamicMemory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double *pGrades = NULL;
    int size;

    cout << "How many grades do you want to enter in? \n";
    cin >> size;

    pGrades = new double[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter grade #" << +1 << ": ";
        cin >> pGrades[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << pGrades[i] << ' ';
    }
    delete[] pGrades;

    int* pNum = NULL;//We use NULL if we don't assign any value yet, when we initialise the var

    pNum = new int;

    cout << "\n";
    cout << "Insert the value of the variable:\n";
    cin >> *pNum;//Here we need the deference, because it's just a var

    std::cout << "The address of the variable is: " << pNum << " and its value is: " << *pNum << "\n";
    delete pNum;

    return 0;
}
