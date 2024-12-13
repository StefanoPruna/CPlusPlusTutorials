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
3. Add all numbers in the odd position from right to left from the original/initial number
4. Sum results from steps 2 and 3
5. If step 4 is divisible by 10, the number is valid
*/

/*Examples of valid credit card numbers
* 6011 0009 9013 9424
* 1 2 2 0 0 1 8 2 1 8 4 
* 29
* 0 1 0 9 0 3 4 4 
* 21
* 29+21=50
* 50/10=5

3782 8224 6310 005
1. 0 0 6 8 4 4 1 4 
2. 27
3. 5 0 1 6 2 8 8 3
4. 33
5. 27+33=60
6. 60/10=6
*/

int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);

int main()
{
    string cardNumber;
    int result = 0;

    cout << "Enter a credit card number: \n";
    cin >> cardNumber;

    //Step 4 of Luhn Algorithm
    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    //Step 5 of Luhn Algorithm
    if (result % 10 == 0)
        cout << cardNumber << " is valid";
    else
        cout << cardNumber << " is not valid";

    return 0;
}

int getDigit(const int number)
{
    return number % 10 + (number / 10 % 10);
}

//Step 3 of Luhn Algorithm
int sumOddDigits(const string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        /*
        * We're working with characters,cardNumber[i], so the decimal equivalent of the character 0 is number 48
        * decimal   character
        * 48        0
        * 49        1
        * 50        2
        * 51        3
        * 52        4
        * 53        5
        * 54        6
        * 55        7
        * 56        8
        * 57        9
        */
        sum += cardNumber[i] - '0';
    }
    return  sum;
}

//Step 2 of Luhn Algorithm
int sumEvenDigits(const string cardNumber)
{
    int sum = 0;

    //Step 1 of Luhn Algorithm; -2 from the last digit of the array
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        /*
        * We're working with characters,cardNumber[i], so the decimal equivalent of the character 0 is number 48
        * decimal   character
        * 48        0
        * 49        1   
        * 50        2
        * 51        3
        * 52        4
        * 53        5
        * 54        6
        * 55        7
        * 56        8
        * 57        9
        */
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return  sum;
}

