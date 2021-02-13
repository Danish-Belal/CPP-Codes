#include <iostream>
using namespace std;

/*        
A function using private Data of Two class.
class Y; // Forward Declaratration for Y.
class X
{
    int data;

public:
    friend void add(X, Y);
    void setData(int value)
    {
        data = value;
    }
};
class Y
{
    int data;

public: 
    friend void add(X o1, Y o2);
    void setData(int num)
    {
        data = num;
    }
};

void add(X o1, Y o2)
{
    cout << "The sum of X and Y is " << o1.data + o2.data;
};

int main()
{
    X a;
    a.setData(3);
    Y b;
    b.setData(4);

    add(a, b);

    return 0;
}    */

// Swaping Private Data of Two Class By Friend Function. By Passing Address of private Data

#include <iostream>
using namespace std;

class C2;

class C1
{
    int data1;

public:
    friend void swapData(C1 & , C2 &);
    void setData(int value1)
    {
        data1 = value1;
    }
    void PrintData(void)
    {
        cout << data1 << endl;
    }
};
class C2
{
    int data2;

public:
    friend void swapData(C1 &, C2 &);
    void setData(int value2)
    {
        data2 = value2;
    }
    void PrintData(void)
    {
        cout << data2 << endl;
    }
};

void swapData(C1 &a, C2 &b)   // Call By reference
{
    int temp = a.data1;
    a.data1 = b.data2;
    b.data2 = temp;
   // return a.data , b.data;
 
//    int temp = a.value1;    // Dont know why this is throwing error.
//     a.value1 = b.value2;
//     b.value2 = temp;
};

int main()
{
    C1 d1;
    C2 d2;

    d1.setData(30);
    d2.setData(45);
    d1.PrintData();
    d2.PrintData();

    swapData(d1, d2);

    cout << "The Value of d1 and d2 after swap is :"<<endl;
    d1.PrintData();
    d2.PrintData();

    return 0;
}









