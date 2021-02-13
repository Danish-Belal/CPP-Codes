#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Calling a constorctor with  differnet parameter is known as Default Constorctor.

class Complex
{
    int a, b;

public:
    Complex() // Constructor with no arguments.
    {
         a = 0;
         b = 0;
    }
    Complex(int x, int y) // Constructor with two parameter
    {
        a = x;
        b = y;
    }

    Complex(int x) //Constructoe with 1 parameter.
    {
        a = x;
        b = 10; // Maintain others parametrs otherwise it will give garbage value.
    }

    void print(void)
    {
        cout << "Complex no is: " << a << " + i" << b << endl;
    }
};

int main()
{
    Complex c3;
    Complex c1(5, 3);
    Complex c2(5);

    c1.print();
    c2.print();
    c3.print();
    return 0;
}