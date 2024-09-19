// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>

//using namespace std;
using std::cout;
using std::cin;
using std::string;
using std::max;
using std::min;

//typedef std::vector<std::pair<std::string, int>> pairlistT;
//typedef string textT;
//typedef int numberT;
using textT = string;
using numberT = int;

namespace first
{
    int x = 1;
}

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

     
    
        if (name.length() > 6)
            cout << "Your name cannot be more than 12 characters";
        else if (name.empty())
            cout << "You didn't enter your name";
        else
        {
            cout << "Welcome " << name.append(" the Warrior\n");
            cout << "Welcome " << name.insert(0, "the Warrior ");//0 it's in front of the name
        }
        
    
        
    /*
    double a, b, c;
    double numberOne = 3;
    double numberTwo = 4;
    double three;
    double four;

    cout << "Enter side A: " << "\n";
    cin >> a;
    cout << "Enter side B: " << "\n";
    cin >> b;
    cout << "Enter side C: " << "\n";
    cin >> c;

    c = sqrt(pow(a, 2) + pow(b, 2));

    if(c < 3.5)
        cout << "side C is less than: " << c;
    else if(c == 5)
        cout << "side C is equal of: " << c;
    else
        cout << "side C is higher than: " << c;

    /*
    three = max(numberOne, numberTwo);
    four = min(numberOne, numberTwo);

    //functions are from cmath from the included library
    three = pow(2, 4); 
    three = abs(-3);
    four = round(three);
    four = ceil(three);
    three = floor(four);

    cout << three << " and " << four;
    /*
    string name;
    int age;
    
    cout << "What's your name and your nickname " << "\n";
    getline(cin >> std::ws, name);//I have to add #include <string> and using std::string; or using namespace std
    //cin >> name;
    cout << "Hello " << name << "\n";
    cout << "What's your age " << "\n";
    cin >> age;
    cout << "you're " << age << " years old";
    
    /*
    //type of convertions for variables
    double m = (int)3.14;
    char c = 100; //for ASCII table the 100 character is the letter d
    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    cout << score << "%" << "\n";

    /*
    parenthesis
    multiplication
    division
    addition
    substraction
    */
    /*
    textT firstName = "Loske";
    numberT age = 25;

    cout << age << "\n " << firstName << "\n";

    /*
    int x = 0;

    std::cout << x << "\n"; //It'll print x from main
    cout << first::x << "\n"; //it'll print x from first
    */
    /*
    const double PI = 3.14; //constant variables are upper case
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    int age = 21;
    double price = 7.55; //number with decimals
    char grade = 'A'; // char can store only single character with ''
    bool lightSwitch = true; //or false
    std::string address = "Collins"; //objects that represent a sequence of text

    int x = 5; //declaration
    int y = 5;
    int sum = x + y;

    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << sum << "\n";
    */

    return 0;
}

