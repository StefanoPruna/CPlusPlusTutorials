// classesTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class TryStatic1
{
public:
    TryStatic1() { p = new char[10]; }
    ~TryStatic1() { delete[]p; }
private:
    char * p;
};

class TryStatic2: public TryStatic1
{
public:
    TryStatic2() :b(1) {}
    virtual void F() { b = 3; }
private:
    int b;
};

int main(int argc, char* argv[])
{
    
    return 0;
}
