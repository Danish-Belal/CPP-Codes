// We can specify data type of class when we create template and when write object left that empty < >.
#include <iostream>
using namespace std;
template <class T1 = int, class T2 = string, class T3 = float>
class Danish
{
public:
    T1 roll;
    T2 name;
    T3 att;
    Danish(T1 roll, T2 name, T3 att)
    {
        this->roll = roll;
        this->name = name;
        this->att = att;
    }
    void display()
    {
        cout << "Your roll no and name is: " << roll << " " << name << endl;
        cout << "Your attendence is: " << att << endl;
    }
};
int main()
{
    // Danish  < > D( 14 , "Danish", 71.78); // it will use default data type specifyed in templete class. <>
    //  D.display();

    Danish<string, int, char> D("Danish", 71, 'D'); // can aslo specify desired data type.
    D.display();
    return 0;
}