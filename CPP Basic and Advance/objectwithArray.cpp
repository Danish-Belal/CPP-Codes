// Using Arrays with object.

#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    void Get(void)
    {
        cout << "Enter your name" << endl;
        cin >> name;
    }
    void Print(void)
    {
        cout << "Your name is " << name << endl;
    }
};

int main()
{

    Student diploma[4];
    for (int i = 0; i < 4; i++)
    {
        diploma[i].Get();
    }
    for (int i = 0; i < 4; i++)
    {
        diploma[i].Print();
    }

    return 0;
}
