// When we call a simple function multiple time then we use inline function . it change actual value direct.
// It save time.

// Static variable  used only once



inline int sum(int a , int b)
{
    static int d = 0;   //d = 0 will used only once then value will change. next time function run and d will be 1
    d += 1;
   int c= (a+b)*d;
    return c;
}

#include<iostream>
using namespace std;
int main()
{
   int a , b;
   cout<<"Enter a and b\n";
   cin>>a>>b;
   cout<<sum(a ,b)<<endl;
   cout<<sum(a ,b)<<endl;
   cout<<sum(a ,b)<<endl;
   cout<<sum(a ,b)<<endl;
   cout<<sum(a ,b)<<endl;
   cout<<sum(a ,b)<<endl;
   cout<<sum(a ,b)<<endl;

  return 0;
}







