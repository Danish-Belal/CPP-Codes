// ( this -> ) is a keyword which is a pointer which points to the object which invokes the member function.
#include<iostream>
using namespace std;

class A
{
    int a;
    public:
      //  A &  get_Data(int a)  // Use A & to use it like an onject and return  type is *this.
        void get_Data(int a)
        {
           this-> a = a ;
           //return *this;  
        }
        void print_Data()
        {
            cout<<"The Data is: "<<a;
        }
};
int main()
{
    A a;
    a.get_Data(4);
    a.print_Data();

    //  using this pointer.
   // a.get_Data(5).print_Data();   // Here a became an object by using A& set_Data() and returning value was (return *this.)

  return 0;
}
















