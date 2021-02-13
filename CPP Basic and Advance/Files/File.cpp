#include<iostream>
#include<fstream>  

/*
The useful classes for working with a file.
1. fstreambase
2. ifstream --> Drived form fstrambase
3. ofstream --> Drive form fstreambase  

*/

// In orderd to work with a file in cpp, you will have to open it. primarily , there are two ways to open it.
// 1. Using the constructor.
// 2. using the member funtion open () of the class.
using namespace std;
int main()
{
   string n = "Danish Belal";
   string n2;
  //  // Opening file using constructor and writing it
  //  ofstream out ("sample.txt");   // Write operation.
  //  out<<n;  // write to the file sample.txt.
   

   // Opening file using constructor and reading it.
   ifstream in ("sample2.txt");   // Read operation.
   //in>>n2;
   getline(in , n2);  // Use to take whole line. but onle one line not whole paragraph.
   cout<<n2;     // print content of file on console.

   
  return 0;
}