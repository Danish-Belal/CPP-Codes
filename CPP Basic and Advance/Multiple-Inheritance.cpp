// Multiple Inheritance --> When a class drive by more than one class.
//  A --> B <--C .  Class B is Drived class which is inherited by base class A and base class B.

#include <iostream>
using namespace std;

class Subject
{
protected:
    int Maths, science, economic;

public:
    void set__marks(float, float, float);
};

void Subject ::set__marks(float m, float s, float e)
{
    Maths = m;
    science = s;
    economic = e;
}

class Marks
{
protected:
    string name;

public:
    void get__name(string n)
    {
        name = n;
    }
};
/*
Syntex for Multiple Inheritance.
class {drived-className} : visiblity-mode {Base-class1} , visiblity-mode {Base-class2}
*/

class Result : public Subject, public Marks
{
public:
    void showResult()
    {
        cout << "Your Name is: " << name << endl;
        cout << "Marks Maths: " << Maths << endl;
        cout << "Marks Science: " << science << endl;
        cout << "Marks Economic: " << economic << endl;
        cout << "Your Percentage is: " << float(Maths + science + economic) / 3 << "%" << endl;
    }
};
/*
The Inherited class will look like.
Data Member:
    Maths, science, economic --> Protected 
    Name  --> Protected.


Member Function.
    void set__marks(float, float, float)  -->    Public.
    void get__name(string n)              -->    Public.
    void showResult()                     -->    Public

*/

int main()
{
    Result Danish;
    Danish.set__marks(87, 88, 87);
    Danish.get__name("Danish");
    Danish.showResult();

    return 0;
}
