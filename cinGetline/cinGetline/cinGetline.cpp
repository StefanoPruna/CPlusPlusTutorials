// cinGetline.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string name;
    int age;

    cout << "What's your name and your nickname " << "\n";
    getline(cin >> std::ws, name);//I have to add #include <string>
    //cin >> name;
    cout << "Hello " << name << "\n" << "\n";
    cout << "What's your age " << "\n";
    cin >> age;
    cout << "you're " << age << " years old";
}


