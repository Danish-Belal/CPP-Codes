// parameterized and default Constructor in cpp.
// Parametrized constroctor takes some parameter.
//Default Constorctor Does not take any parameter.

#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int, int);

    void printData(void)
    {
        cout << "The complex no is: " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(int x, int y) // Parametrized Constructor.  //Takes 2 Parameter.
{
    a = x;
    b = y;
}

int main()
{
    // Implicit Call.
    Complex a(4, 5);

    // Explicit call.
    Complex b = Complex(7, 8);

    a.printData();
    b.printData();
    return 0;
}