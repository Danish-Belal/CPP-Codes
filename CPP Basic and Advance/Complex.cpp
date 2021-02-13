#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void complexForm(Complex x, Complex y)
    {
        a = x.a + y.a;
        b = x.b + y.b;
    };

    void Print(void)
    {
        cout << "The complex no is: " << a << " + " << b << "i" << endl;
    };
};

int main()
{

    Complex c1, c2, c3;
    c1.setData(1, 2);
    c1.Print();

    c2.setData(3, 2);
    c2.Print();

    c3.complexForm(c1, c2);
    c3.Print();

    return 0;
}