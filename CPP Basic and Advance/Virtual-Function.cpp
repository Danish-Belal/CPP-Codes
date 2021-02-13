#include <iostream>
using namespace std;

class Base
{
public:
    int var_base;
    void set_Base(int var_base)
    {
        this->var_base = var_base;
    }
    virtual void display() // base class pointer will not execute base display function beacuse it have virtual keyword.
    {
        cout << "This is base class :  " << var_base << endl;
    }
};
class Drived : public Base
{
public:
    int var_drive = 10;
    void display() // Base class pointer will now execute this display. cause base class function is virtual function.
    {
        cout << "This is base class in drive:  " << var_base << endl;
        cout << "This is drive class in drive:  " << var_drive << endl;
    }
};


int main()
{
    Base *Base_pointer;
    Base base;
    Drived obj_drive;

    Base_pointer = &obj_drive;
    Base_pointer->set_Base(4);
    Base_pointer->display(); // drive class will be execute in late binding. (Run time polymorphism)

    return 0;
}
