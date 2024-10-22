// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

//Sort Arrays
void sort(int array3[], int size3);

//fill the gap in an Array

void fillArray(string books[]);

int main()
{
    int array3[] = { 10,4,3,5,7,2,9,6,1,8 };
    int size3 = sizeof(array3) / sizeof(array3[0]);

    sort(array3, size3);

    for (int element3 : array3)
        cout << element3 << " ";

    //fill method     
    const int SIZE = 100;
    string books[SIZE];

    fillArray(books);    

    return 0;
}

void sort(int array3[], int size3)
{
    int temp;
    for (int i = 0; i < size3 -1; i++)
    {
        for (int j = 0; j < size3 - i - 1; j++)
        {
            //To put the array3 in descendant order, change to <
            if (array3[j] > array3[j + 1])
            {
                temp = array3[j];
                array3[j] = array3[j + 1];
                array3[j + 1] = temp;
            }            
        }
    }
}

void fillArray(string books[])
{       
    const int SIZE = 100;
    string books[SIZE];
    
    fill(books, books + (SIZE / 2), "\nLOTR");
    fill(books + (SIZE / 2), books + SIZE, "HOBBIT");
    
    for (string book : books)
        cout << book << "\n";
}

/*
int searchArray(int array[], int size, int element);
int searchArray2(string array2[], int sizeString, string elementString);

int main()
{
    int numbers[] = { 1,2,3,4,5,6,7,8,9 };
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int myNum;    

    string foods[] = { "Pane", "Pasta", "Pizza" };
    int sizeString = sizeof(foods) / sizeof(foods[0]);
    int indexString;
    string myFood;

    cout << "Enter element to search for: " << "\n";
    //I have to #include <string> to getline() working
    getline(cin, myFood);

    indexString = searchArray2(foods, sizeString, myFood);

    if (indexString != -1)
        cout << myFood << " is in the array\n";
    else
        cout << myFood << " isn't in the array\n";

    cout << "Enter element to search for: " << "\n";
    cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if (index != -1)
        cout << myNum << " is in the array";
    else
        cout << myNum << " isn't in the array";  
  
    return 0;
}

int searchArray(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
            return i;
    }

    return - 1;
}

int searchArray2(string array2[], int sizeString, string elementString)
{
    for (int i = 0; i < sizeString; i++)
    {
        if (array2[i] == elementString)
            return i;
    }

    return - 1;
}
*/

// Create a Array function
/*
double getTotal(double prices[], int size);

int main()
{
    double prices[] = { 49.5, 16.85, 74.3, 8.03 };
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);

    cout << "$" << total;

    return 0;
}

double getTotal(double prices[], int size)
{
    // even if the var is the same, but they're in different functions
    double total = 0;

    for (int i=0; i < size; i++)
        total += prices[i];

    return total;
}
*/

//LOOPS FOR THE ARRAYS
/*
void printArray();


int main()
{
    printArray();

    string cars[] = { "Fiat", "Lancia", "Alfa Romeo" };

    //for each loop
    for (string car : cars)
        cout << car << "\n";
      
    //alternative, for loop
    for (int i = 0; i < sizeof(cars) / sizeof(string); i++)
        cout << cars[i] << "\n";

    return 0;
}

void printArray()
{
    char grades[] = { 'A', 'B', 'C', 'D' };

    for (int i = 0; i < sizeof(grades) / sizeof(char); i++)
        cout << grades[i] << "\n";
}
*/


