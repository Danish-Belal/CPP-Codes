#include <iostream>
using namespace std;
// float Average(int a, int b)
// {
//     float avg = (a + b) / 2;
//     return avg;
// }
// float Average2(float a, float b)
// {
//     float avg = (a + b) / 2;
//     return avg;
// }


// FOr multiple data type we need to define seprate function . to avoid this we use template.
template <class T1 , class T2>
float Average(T1 a, T2 b)
{
    float avg = (a + b) / 2;
    return avg;
}
int main()
{
//     float tavg1 , tavg2;
//     tavg1 = Average(5.7, 2.6);
//     cout << "The average is: " << tavg1 << endl;
//   //   printf("The avg is %.3f" , tavg1 , "\n");
   
//     tavg2 = Average2(5,6);
//     cout<<tavg2;

  // using function template 
  float a = Average(5,890.55);
  cout<<"The average is: "<<a;
  
    return 0;
}