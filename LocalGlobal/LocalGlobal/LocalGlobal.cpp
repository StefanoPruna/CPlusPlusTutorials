// LocalGlobal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout;
using std::cin;
using std::string;

/*Global var, however, it's not the best practice as it's less secure and pollute the global namespace.
It's adviced to use local var.
Also, the program will prioritise local var before the global
In this example, it won't print 3 unless we remove the local vars to show 3*/

int myNum = 3;
void printNum();

int main()
{
    //local var
    //It does not show 3
    /*int myNum = 1;
    printNum();
    cout << myNum << "\n";*/

    /*It shows 3, with :: will take the global*/
    printNum();
    cout << ::myNum;

    return 0;
}

void printNum()
{
    //You can create the same vars with the same name, because they're from a different scope
    //local var
    /*int myNum = 2;
    cout << myNum << "\n";*/

    //use the gloabl var
    cout << ::myNum;
}

