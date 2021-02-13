
// Friend function is a function who have permission to aaccess data of a class , whenever the function is not member of that class.

#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;
    // Below line is basically  declaration by a class for a friend function(complexForm) to access their data member , but
    // Friend class is not member of this class.
    friend Complex complexForm(Complex o1, Complex o2); // It can be in private or public.  but declaration is important.

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void Print(void)
    {
        cout << "The complex no is: " << a << " + " << b << "i" << endl;
    }
};

Complex complexForm(Complex o1, Complex o2)
{
    Complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
};

int main()
{

    Complex c1, c2, form;
    c1.setData(1, 2);
    c1.Print();

    c2.setData(3, 2);
    c2.Print();

    form = complexForm(c1, c2);
    form.Print();

    return 0;
}

/* 
 Properties of Friend Function.
 1: Not in the scope of class.
 2: since it has not in the scope of class , it can not be called form that object of that class. 
 object.friendclass() == Invailed.

 3: can be invoked without help of any object.
 4: usually contains the object as arguments.
 5; can be declared inside public or private section of the class.
 6: it can not access the member directly by the name and need object-name.member-name to access ant member.



*/
