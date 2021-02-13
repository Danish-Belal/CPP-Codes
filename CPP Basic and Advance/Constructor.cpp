// Constructor --> constructor is a special member function with the same name as of the class.
// It is used to initialize the object of the class.
//it is automatically invoked whenever an object is created.

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void);    // Declaring constructor as same name class.

    void printData(void)
    {
        cout << "The complex no is: " << a << " + " << b <<"i"<< endl;
    }
};
Complex ::Complex(void)   // Default Constructor --> Does not accept any parameter.
{
   a = 3;
   b =5;

};

int main()
{

    Complex c1, c2;
    c1.printData();
    c2.printData();

    return 0;
}
 /*
   Characteristics of constructor.
   1: It should be declared in public section of the class.
   2: They are automatically invoked whenever the object is created.
   3: They can not return Values and do not have return type.
   4: It can have default argument.
   5: we can not refer to their adress.

*/