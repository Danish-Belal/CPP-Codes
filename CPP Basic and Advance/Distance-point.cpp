
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Y;
class X
{
    int x1, y1;
    friend class Y;

public:
  friend  void showData(X o1 , Y o2);

     X ( int a , int b)
     {
         x1 = a;
         y1 = b;
     }
};


class Y
{
int x2, y2;
public:
 friend void showData(X o1 , Y o2) ;
    Y (int a , int b)
    {
        x2 = a;
        y2 = b;
    }   
     
};

void showData(X o1 , Y o2)
{
    x2.o2 
}

int main()
{
    

    return 0;
}