// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    /*Null value = When a pointer is holding a null value, that pointer is not pointing at anything
                    They're useful to determine if an address was successfully assigned to a pointer*/
    
    int *pointer = nullptr;
    int number = 123;

    pointer = &number;
    
    if (pointer == nullptr)
        cout << "address wasn't assigned\n";
    else
        cout << "address was assigned\n";

    //DO NOT DO BELOW!!!
    /*IF I DON'T ASSIGNED THE ADDRESS, pointer = &number,
    * OR POINTING TO FREE MEMORY
    AND I TRY TO PRINT THE POINTER VAR, cout << *pointer
    THE SYSTEM WILL CRASH!!!
    THIS WILL CAUSE UNDEFINED BEHAVIOR
    */

    ///*pointers = var that stores a memory address of another var
    //           & for address of operator
    //           * for dereference operator */
    //string name = "Loske";
    //int age = 45;
    //string freePizze[6] = { "Margherita", "Mortadella", "Prosciutto", "Funghi", "Tonno e Cipolla", "Frutti di Mare" };

    ////All memory addresses
    //string* pName = &name;
    //int* pAge = &age;
    //string* pFreePizze = freePizze; //An Array is already a memory address

    ////Print the memory address allocated
    //cout << pName << '\n'; //it contains the memory address
    //cout << pAge << '\n';
    //cout << pFreePizze << '\n';

    ////Access their values
    //cout << *pName << '\n'; // to access the value of this (pName) address in the memory
    //cout << *pAge << '\n';
    //cout << *pFreePizze << '\n'; //it shows the 1st value in the array
    //cout << pFreePizze[4]; //If we print a specific index, we don't need the dereference operator symbol *

    return 0;
}
