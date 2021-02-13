// Ambiguity --> Occured when two Base clases have same function and Drive class's objct call that function.
// Here problem is which function shoud call , to resolve this we declare inside Drive class , function(){ Base-class:: function()}.

#include<iostream>
using namespace std;
class Base1
{
    public:
      void greet()
      {
          cout<<"Hello ! How are you ? "<<endl;
      }
};
class Base2
{
   public:
         void greet()
      {
          cout<<"Hello ! Kaise h ?"<<endl;
      }
};
class Drive : public Base1 , public Base2 
{
    int a;
    public:
    void greet()
    {
        Base1 :: greet();   // Resolving Ambiguity by declaring that we want Base1 greet() function .
    }
};


int main()
{
     Base1 B1;
     B1.greet();

     Base2 B2;
     B2.greet();

     Drive D;
     D.greet();   //Ambiguity occour , we need to define in drive class that which class function we want to call.

  return 0;
}