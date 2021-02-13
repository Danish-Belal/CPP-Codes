// Using of constructor in drived class.
// FIrst base class constructor will run then drive constructor will execute.
// If there are more than 1 base class then (Multuple inheritance)  in oederd they are drived.
// in Multilevel constructor execute in order or inheritance.
// If there is any virtual class then virtual class constoructor will run first then other non virtual class and then drived class.

#include<iostream>
using namespace std;
/*
case1:
class B : public A {
    // Order of execution of constructor --> first A() then B()
};
case2:
class A : public B , public C{
    // Order of execution of constructor --> firstB() then C() and A()
};
case3:
class A : public B , virtual public C{
    // Order of execution of constructor --> first C() then B() and then A()
};

*/

class Base1
{
    int Data1;
    public:
        Base1(int i)
        {
            Data1 = i;
            cout<<"THis is Base 1"<<endl;
        }
    void printData1(void){
        cout<<"Data 1 in Base 1 is: "<<Data1<<endl;
    }    
   
};

class Base2 
{
    int Data2;
    public:
        Base2(int i)
        {
            Data2 = i;
            cout<<"THis is Base 2"<<endl;
        }
    void printData2(void){
        cout<<"Data 2 in Base 2 is: "<<Data2<<endl;
    }    
   
};

class Drived : public Base1 , public Base2
{
    int drived1 , drived2;
    public: 
   
        Drived(int a , int b, int c , int d) : Base1(a) , Base2(b)
        {
            drived1 = c ;
            drived2 = d;
            cout<<"This is Drived Class"<<endl;
        }

    void PrintDrive(void)
    {
        cout<<"Drived Data1 and Data2 is: "<<drived1<<" , "<<drived2;
    }

};


int main()
{

    Drived Danish(1,2,3,4);
    Danish.printData1();
    Danish.printData2();
    Danish.PrintDrive();


  return 0;
}














