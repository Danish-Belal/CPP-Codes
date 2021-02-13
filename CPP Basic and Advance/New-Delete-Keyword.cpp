#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    cout<<"The value of a is: "<<*(ptr)<<endl;
    cout<<"The adress of a is: "<<(ptr)<<endl;


    // New Operator/Keyword
   int *p = new int (25);   // Dynamically create/initilize a intiger and assign value at adress p.
  // delete p;             // delete operator to delete dynamically created pointer.
   cout<<"The value at adress p is: "<<*(p)<<endl;
  


   float *b = new float(56.4);  // Dynamically initilize a floate and assing value to adress b.
   cout<<"Value at adress b is: "<<*(b)<<endl;



   int *arr = new int [3];  //Dynamically  Create a intiger array using new keyword.  we can allocate contigious block of memory using array.
   arr[0] = 10;
   *(arr+1) = 20;   // We can add 1 in address.
   arr[2] = 30;
  // delete[] arr;        //  Delete operator used to delete  and relese memory form arr.
   cout<<"The value at arr[0] is: "<<arr[0]<<endl;  
   cout<<"The value at arr[1] is: "<<arr[1]<<endl; 
   cout<<"The value at arr[2] is: "<<arr[2]<<endl; 
    

    // Delete Operator
    // Delete operator used to delete and relese memory .


  return 0;
}