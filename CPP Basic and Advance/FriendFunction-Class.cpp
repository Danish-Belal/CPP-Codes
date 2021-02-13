// In friend-function-class , we declare a  (function of a class as a friend of another class)or (a class friend of other class).
/*
  *** We can declare individual a function as a friend or entire class as a friend. ***

 ** Individually Declaring Function as a friend. **
 In this program we declare a function sumReal(), sumComplex() of class Calculator as a firend of Complex class.
  and function sunReal() is able to access Complex class private data (a ,b);  . We can do this with may functions.

 ** Declare class as friend **
 In this we simply declare a class as a friend of other class , in this class Calculator's all function will able to Complex's class private data.
 we use this if want to access private data for all function.

*/


#include <iostream>
using namespace std;

//Forward declaration--> we declare that we will define Complex class later. but we consider that class here.
class Complex;              //forward declaration.

class Calculator
{
public:
    int sumNo(int a, int b)
    {
        return (a + b);
    }

    int sumReal(Complex, Complex);
    int sumComplex(Complex, Complex);
};

class Complex
{
    int a;
    int b;
    // // Individully declaring function as a freind of class.
    // friend int Calculator ::sumReal(Complex, Complex);
    // friend int Calculator ::sumComplex(Complex, Complex);
     
    // Declaring whole class as a function. all function of class Calculator can access Complex private Data. 
    friend class Calculator;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void Print(void)
    {
        cout << "The complex no is: " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumReal(Complex o1, Complex o2)
{

    int sum = (o1.a + o2.a);
    return sum;
}
int Calculator ::sumComplex(Complex o1, Complex o2)
{

    int sum = (o1.b + o2.b);
    return sum;
}


int main()
{
    Complex o1, o2;
    o1.setData(1, 4);
    o2.setData(2, 6);
    o1.Print();
    o2.Print();

    Calculator calc;
    int result = calc.sumReal(o1, o2);
    cout << "Sum of Real part is: " << result<<endl;
   

    int cResult = calc.sumComplex(o1,o2);
    cout<<"Sum of Complex Part is: "<<cResult<<endl;

    return 0;
}