// CreditCardNumberCheck.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

/*Check if a credit card number is valid
* Luhn Algorithm:
1. Double every second digit from right to left
    if doubled number is 2 digits, split them
2. Add all single digits from step 1
3. Add all odd numbered digits from right to left
4. Sum results from steps 2 and 3
5. If step 4 is divisible by 10, the number is valid
*/

/*Example of a valid credit card
378282246310005
1. 3 1 4 8 4 8 4 2 8 6 6 2 0 0 0 1 0
2. 57
3. 5
4. 62
5. 62 / 10 = 

6011000990139424
1. */



int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
