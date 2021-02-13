#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream out;
    out.open("sample2.txt");
    out<<"This is me Danish ";
    out<<"Danish Belal ."; 
    out<<"Yes me. ";
    out.close();
   
     ifstream in;
     string st1,st2 , st;
     in.open("sample2.txt");
    //  getline(in , st1);
    //  getline(in , st2);
    //  cout<<st1<<st2;
     while(in.eof()==0)     //eof(End of line)
     {
         getline(in , st);
         cout<<st<<endl;
     }
     in.close();
     return 0;
}