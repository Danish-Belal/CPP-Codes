/*
Polymorphism -> Polymorphism is known as single name and multiple forms. 

There are Two types of polymorphism .
1: Compile time Polymorphis : also known as early binding. (in this complier known which function have to call).
Compile time polymorphism is two types :-> 1: Function Overloading , 2: Operator overloading.

2: Run time polymorphism ->(static binding) its depends upon type of pointer. which function have to call it is decides when program run.
e.g -> virtual function.
*/


// Pointer to Drive class.
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
    void display()
    {
        cout << "This is base class :  " << var_base << endl;
    }
};
class Drived : public Base
{
public:
    int var_drive;
    void display()
    {
        cout << "This is base class in drive:  " << var_base << endl;
        cout << "This is drive class in drive:  " << var_drive << endl;
    }
};


int main()
{
    
   Base *Base_pointer;
   Base obj_Base;
   Drived obj_Drive;

   Base_pointer = &obj_Drive;       // Pointing base class pointer to drive class.
 // Base_pointer->set_Base(2);       // we can only use pointer Base_pointer to acess only base class object.  
  //Base_pointer->display();

 // Base_pointer->var_drive = 10;   //throw error.  we can not access a drive class object by base class pointer.
 // obj_Drive.var_drive = 10;
 // obj_Drive.display();
 
    Drived *Drive_pointer;
    Drive_pointer = &obj_Drive;      // Drive_pointer pointing an obj_Drive of Drive class.
    Drive_pointer->set_Base(3);     // it will set var_base value but drive class display will run.
    Drive_pointer->var_drive = 6;
    Drive_pointer->display();

   
    return 0;

    // This is an  example of run time polymorphism . at run time it is deciding that which display will assign to which pointer.
    // Decision is taken at run time and by pointer.
}
