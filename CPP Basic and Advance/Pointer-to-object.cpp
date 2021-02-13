#include<iostream>
using namespace std;
class Complex
{
    public:
    int real , imegnery ;
        void set_Data(int x , int y)
        {
            real = x;
            imegnery = y ;
        }
        void get_Data( void)
        {
            cout<<"Real value is: "<<real<<endl;
            cout<<"Real imegnery is: "<<imegnery<<endl;
            cout<<"Equation is: "<<real<<" + i"<<imegnery<<endl;

        }
};
int main()
{  
    // Complex C;
    // C.set_Data(1,5);
    // C.get_Data();

    // Complex C1;
    // //Complex *ptr =  &C1;              // pointer to object 
    // Complex *ptr = new Complex ;        // We can also use new keyword to initilize a new onject at adress ptr.
    // (*ptr).set_Data(2,6);
    // (*ptr).get_Data();

    // // Arrow Operator(->). use to dereference pointer ptr.
    // ptr->set_Data(2,6);  // Arrow will do dereference pointer ptr and run its object set_data.
    // ptr->get_Data();
   

 // Array of Object using pointer.

  Complex  *ptr1 = new Complex [3]; // we have created 3 objects of class complex. ptr1 points is object 1, 
  ptr1->set_Data(4,6);
  ptr1->get_Data();


  (ptr1+1)->set_Data(4,7);    //(ptr1+1) points is object 2.
  (ptr1+1)->get_Data();

  (ptr1+2)->set_Data(8,9);      // (ptr1+2) points is object 3.
  (ptr1+2)->get_Data();
  
  return 0;
}


