#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class SimpleCalculator
{
protected:
    int a, b;
    int sum , mul , sub;
    float div;

public:
    void set__Data()
    {
        cout<<"Enter the value of a: "<<endl;
        cin>>a;
        cout<<"Enter the value of b: "<<endl;
        cin>>b;
        
    } 

    void Calculator();
    void Showcalculator();        
};

void SimpleCalculator :: Calculator()
{
     sum = a + b;
     sub = a - b;
     mul = a * b;
     div = a / b;   
};

void SimpleCalculator :: Showcalculator()
{
    
    cout << " Additin        is: " << sum << endl;
    cout << " Subtraction    is: " << sub << endl;
    cout << " Multiplication is: " << mul << endl;
    cout << " Division       is: " << div << endl;
};


class ScientificCalculator
{
   int a , b;
public:
    void set__SData()
    {
        cout<<"Enter the value of a: "<<endl;
        cin>>a;
        cout<<"Enter the value of b: "<<endl;
        cin>>b;   
    } 

    void performOperation();
};
void ScientificCalculator :: performOperation()
{

    cout << "Additin        (a+b)  : " << a+b << endl;
    cout<< "Subtraction     (a-b)  : " << a-b << endl;
    cout << "Multiplication (a*b)  : " << a*b << endl;
    cout << "Division       (a/b)  : " << a/b << endl;
    cout<< "Square of a:   sqrt(a) : "<<sqrt(a)<<endl;
    cout<<"Cosin of a:     cos(a)  : " <<cos(a)<<endl;
    cout<<"sin of a:       sin(a)  : " <<sin(a)<<endl;
    cout<<"Exponantial     exp(a)  : "<<exp(a)<<endl;
    cout<<"Tan(a):         tan(a)  : "<<tan(a)<<endl;

}

class HybridCalculator : public SimpleCalculator , public ScientificCalculator
{
   
};

 int main()
{
      SimpleCalculator cal;
     // cal.set__Data();
     // cal.Calculator();
     // cal.Showcalculator();

      ScientificCalculator scal;
    //  scal.set__SData();
    //  scal.performOperation();



    HybridCalculator H;
    // For simple calculator.
    H.set__Data();
    H.Calculator();
    H.Showcalculator();
    
    // For scientific Calculator.
    H.set__SData();
    H.performOperation();

    return 0;

}
