// functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

//using namespace std;
using std::cout;
using std::cin;
using std::string;

string concatStrings(string string1, string string2);

int main()
{
	string firstName = "Loske";
	string lastName = "Code";
	string fullName = concatStrings(firstName, lastName);

	cout << "Hello " << fullName;

	return 0;
}

string concatStrings(string string1, string string2)
{
	return string1 + " " + string2;
}
//double square(double length);
//double cube(double length);
//
//int main()
//{
//	double length = 5.0;
//	double area = square(length);
//	double volume = cube(length);
//
//	cout << "Area: " << area << "cm2\n";
//	cout << "Volume: " << volume << "cm3\n";
//
//	return 0;
//}
//
//double square(double length)
//{
//	return length * length;
//}
//
//double cube(double length)
//{
//	return length * length * length;
//}

//void happyBirthday(string name, int age);
//
//int main()
//{
//    string name = "Loske";
//    int age = 45;
//
//    happyBirthday(name, age);
//
//    return 0;
//}
//
//void happyBirthday(string birthday, int myAge)
//{
//    cout << "Happy Birthday to you!\n";
//    cout << "Happy Birthday to " << birthday << "\n";
//    cout << "Happy Birthday to you!\n";
//    cout << "Happy " << myAge << "th birthday!\n";
//}
