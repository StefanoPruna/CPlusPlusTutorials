// struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//Struct

struct Car
{
    string model;
    int year;
    string colour;
};

void printCar(Car car);
void paintCar(Car &car, string colour);

int main()
{
    Car car1;
    Car car2;

    car1.model = "Ferrari";
    car1.year = 1998;
    car1.colour = "Red";

    car2.model = "Fiat";
    car2.year = 2010;
    car2.colour = "Black";
    
    paintCar(car1, "Yellow");
    paintCar(car2, "Red");

    printCar(car1);
    printCar(car2);

    return 0;
}
void printCar(Car car)
{
    cout << &car << "\n";
    cout << "Car List:" <<  "\n";
    cout << car.model << "\n" << car.year << "\n" << car.colour << "\n";
}
void paintCar(Car &car, string colour)
{
    car.colour = colour;
}

/*
struct student {
    string name;
    double gpa;
    int age;
    bool enrolled;
};

int main()
{
    student student1;
    student1.name = "Spongebob";
    student1.age = 21;
    student1.gpa = 75;
    student1.enrolled = true;

    cout << "Student's name: " << student1.name << "\n" << "student's GPA: " << student1.gpa << "\n" << "student's age: " << student1.age << "\n";
    if (student1.enrolled == true)
        cout << "Student enrolled: Yes";
    else
        cout << "Student enrolled: No";

    return 0;
}
*/

