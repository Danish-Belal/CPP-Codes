// Arrays Are collection of simillar data type. use contigous memory Location.

#include<iostream>
using namespace std;
int main()
{
   int marks[5] = {3,5,6,8,5};
   /*
   for (int i = 0; i <5; i++)
   {
       cout<<marks[i]<<endl;
   }
   */

    int* c = marks;     // array name contain address of first element of array.
    for (int i = 0; i < 5; i++)
    {
        cout<<"Marks is "<<c[i]<<endl;
        //cout<<"Marks is "<<*(c+i)<<endl;   // Both are same
    }
    

  return 0;
}