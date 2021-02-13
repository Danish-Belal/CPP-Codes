#include <iostream>
using namespace std;
// When two class(Test, Sports) are drived by a base class Student. and Class Result Drived by Test and Sports.
// Then attriburs of class Student will Occur in both drived class (Test, Sports)  and when we call a function from Sports class, Ambiguity occour.
// To resolve Ambiguity we use Virtual Base class Concept. we Declare Student class As virtual for (Test, Sports).
// When (Test, Sports) will be base class for Result class , Student Attribut will occure only once , And Sport class is Virtual Base class. 
/*
student --> Test
Student --> Sports

    Test --> Result <--Sports

*/

class Student
{
protected:
    int Roll;

public:
    void set(int a)
    {
        Roll = a;
    }
    void PrintRoll(void)
    {
        cout << "Your Roll no is: " << Roll << endl;
    }
};

class Test : virtual public Student //Declaring that this is virtual class.
{
protected:
    float Maths, Science;

public:
    void Set__Marks(float m, float S)
    {
        Maths = m;
        Science = S;
    }
    void Print__Marks(void)
    {
        cout << "Marks in Maths: " << Maths << endl;
        cout << "Marks in Science: " << Science << endl;
    }
};

class Sports : public virtual Student
{
protected:
    float Score;

public:
    void set_Score(float sc)
    {
        Score = sc;
    }
    void Print__Score(void)
    {
        cout << "Your Score is: " << Score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float Total;

public:
    void Display(void)
    {
        Total = Maths + Science + Score;
        PrintRoll();
        Print__Marks();
        Print__Score();
        cout << "Your Total Marks is: " << Total << endl;
    }
};

int main()
{
    //     Student s;
    //     s.set(14);

    //    Test t;
    //    t.Set__Marks(80,90);
    //    t.Print__Marks();

    //    Sports sp;
    //    sp.set_Score(89);
    //    sp.Print__Sceore();

    Result R;
    R.set(14);
    R.Set__Marks(80.99, 90.89);
    R.set_Score(9);
    R.Display();

    return 0;

}
