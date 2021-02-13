// Destroctor is used to destroy constructor and relase memory. it does not take input and it have no return type.
// When a constructor works finished then we destroy that constructor for saving our memory space.

#include<iostream>
using namespace std;

int count = 0;
class num
{
    public:
    num()
    {
        cout<<"This is constructor: "<<count<<endl;
        count++;
    }
    ~num()
    {
        cout<<"object is Destroying object no: "<<count<<endl;
        count--;
    }


};

int main()
{
    cout<<"This is main: "<<endl;
    num n1 ;
    {
        cout<<"object num1 is creating"<<endl;
        num n2 ,n3;
        {
            cout<<"objec n2"<<endl;
            cout<<"object n3"<<endl;
        }

    }

    cout<<"Exiting from constructor"<<endl;

  return 0;
}


// ~classname used to declare a destructor.  (~) dild.