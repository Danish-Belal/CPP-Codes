// Multilevel inheritance --> A-->B-->C , when B drive by A and C drive by B , Known as Multilevel Inheritance.
#include <iostream>
using namespace std;

class Student
{
protected:
    int Roll;
    float Maths, Physic;

public:
    void set__marks(float, float);
    void get__marks();
};

void Student ::set__marks(float m, float p)
{
    Maths = m;
    Physic = p;
}

void Student ::get__marks()
{
    cout << "Your Marks in Maths is: " << Maths << endl;
    cout << "Your Marks in Physic is: " << Physic << endl;
}

class Exam : public Student
{
protected:
    float Percentage;

public:
    
    void set__Rollno(int r)
    {
    
        Roll = r;
    }
};

class Result : public Exam
{
public:
    void Show__Result()
    {
        cout << "Your Roll no is: " << Roll<<endl;
        cout << "Your percentage is: " << (Maths + Physic) / 2 << "%";
    }
};

int main()
{
    Result Danish;
    Danish.set__Rollno(14);
    Danish.set__marks(80, 90.0);
    Danish.get__marks();
    Danish.Show__Result();

    return 0;
}

/*
Notes:
     If we are inheriting B form A and C from B. [ A-->B-->C ]
     1: A is the Base class for B and B is base class for C.
     2: A-->B-->C is called inheritance Path.

*/
