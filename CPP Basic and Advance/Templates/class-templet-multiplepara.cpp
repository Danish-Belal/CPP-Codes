#include <iostream>
using namespace std;
/*
CLASS TEMPLATE WITH MULTIPLE PARAMETERS( ONE , TWO , MORE THEN TWO). 
template <class T1 , class T2 ...(COMMA SEPRATED)>
class nameOfClass(){
    // class body
}
*/
template <class T1, class T2>  // telling compiler that we will declare some date type while we will create object. Template is coustem Data type.
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 data1, T2 data2)
    {
        this->data1 = data1;
        this->data2 = data2;
    }

    void display()
    {
        cout << data1 << endl
             << data2;
    }
};
int main()
{
    myClass<int, string> m(4, "Danish");
    m.display();

    return 0;
}