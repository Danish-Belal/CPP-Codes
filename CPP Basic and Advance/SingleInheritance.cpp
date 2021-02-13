// Single inheritance --> when a drive class inerited by one base class.
#include <bits/stdc++.h>
using namespace std;

class Base
{
    int Data1;

public:
    int Data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    Data1 = 10;
    Data2 = 20;
}

int Base ::getData1()
{
    return Data1;
}
int Base ::getData2()
{
    return Data2;
}
//class Drive : public Base
class Drive : private Base
{
    int Data3;

public:
    void setValue();
    void printData();
};
void Drive ::setValue()
{
    // setData();   if we declare visiblity mood as private then we need to call set value by drive public member.
    Data3 = (Data2 * getData1());
}

void Drive ::printData()
{
    cout << "The Value of Data1 is " << getData1() << endl;
    cout << "The Value of Data2 is " << Data2 << endl;
    cout << "The Value is " << Data3 << endl;
};
int main()
{

    Drive d;
    // d.setData();   //if visiblity private --> can not directly call public member of base class. cuz they became private for drive class.
    d.setValue();
    d.printData();

    return 0;
}









