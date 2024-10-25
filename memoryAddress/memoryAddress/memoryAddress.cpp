// memoryAddress.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

/*Check if a credit card number is valid
* Luhn Algorithm:
1. Double every second digit from ri*/


//Swap values
void swap(string &x, string &y);

int main()
{
    string x = "the Cleric";
    string y = "Loske ";

    cout << x << y;

    swap(x, y);

    return 0;
}

void swap(string &x, string &y)
{
    string temp;
    temp = x;
    x = y;
    y = temp;
    cout << "\n" << x << y;
}


/*Memory addresses
int main()
{
    string name;
    int age;
    char student;
    bool studentMemory;

    cout << "insert your name\n";
    getline(cin, name);
    
    cout << "insert your age\n";
    cin >> age;

    cout << "are you a student?\n";    
    cin >> student;
    student = toupper(student);
    if (student == 'y')
        studentMemory = true;
    else
        studentMemory = false;    

    cout << "Your name is " << &name << ", your age is " << &age << " and you are " << &student;
    
    return 0;
}
*/

