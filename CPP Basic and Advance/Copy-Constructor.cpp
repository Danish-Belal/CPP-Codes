// Copy constructor makes an new object and pass them their value. 

#include<iostream>
using namespace std;

class Number
{
    int x;
    public:
    Number(){
        x = 0;   // intilizing parameter value to avoid garbage value when this constructor will call.
    }
    Number(int a)
    {
        x = a;
    }
    void Print()
    {
        cout<<"The value of x is: "<<x<<endl;
    }

  // when no copy constroctor is found , compiler supplies its own copy constroctor.
   Number(Number &obj)   // supling Copy constroctor.
   {
       cout<<"Copy constructor is running ";
       x = obj.x;
   }

};

int main()
{
    Number n1, n2(2) , n3  , n5;  // we can also pass parameter with initilization of objects.

//    n1.Print();     
//    n2.Print();
//    n3 = Number(5);
//    n3.Print();
      
  // declare a copy of constructor n4 which is as same as n2.
   Number n4(n2);   // copy constructor invoked. even if it will not define in class . it suplies compiler copy constructor.
   n4.Print();
   
   n5  = n2;        // Copy constructor is not invoke. cause n5 is already a object. its no make sence to create a copy constuctor to an object.
  
  Number n6 = n2 ;  // copy constructor will invoked , cause we are creating a new onject .
  
  return 0;
}