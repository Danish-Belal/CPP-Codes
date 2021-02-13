#include<iostream>
using namespace std;

/*
Syntax for initilization list in constructor:
constructor(argument) : initilization-section
{
        assignment + other code.
}
*/

class Base
{
   int a , b;
   public:
       // Base(int x , int y) : a(x) , b(y)    // Initilization section (used to assign quickly value. x will assign to (a) and y to (b) )
      //  Base(int x , int y) : a(x) , b(y+3)  //Also can add some value b will be 10.
      //  Base(int x , int y) : a(x) , b(a+y)    // (a) value have initilize first in private section so we can add (a) in b 
      //  Base(int x , int y) : a(x) , b(y*a)
        Base(int x , int y) : a(x+b) , b(y)      // a will give garbage value cause (b) have define after (a) so we can not add value of (b) in (a)
        {
          //  a = x;   // We normally initilize value like this , to avoid this we use initilization list in constructor. (Quick initilization)
           // b = y ;
            cout<<"This is initilization section"<<endl;
            cout<<a <<endl<<b;
        }

};

int main()
{
    Base B(5,7);

  return 0;
}