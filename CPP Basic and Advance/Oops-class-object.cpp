#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    int Eno;

public:
    string name;
    void getDetail(void);
    
    void showData()
    {

        cout << "Id  of the student is " << id << endl;
        cout << "Eno of the student is " << Eno << endl;
        cout << "Name of the student is " << name << endl;
    };
};

void Student ::getDetail(void)
{
    cout << "Enter Your Id no" << endl;
    cin >> id;
    cout << "Enter Your Enrolment no" << endl;
    cin >> Eno;
};
int main()
{
    Student danish;
    cout << "Enter Your name" << endl;
    cin >> danish.name;

    // int id  ;
    // int  Eno  ;
    // cout << "Enter Your Id no" << endl;
    // cin >> id;
    // cout << "Enter Your Enrolment no" << endl;
    // cin >> Eno;
    //danish.getDetail(id,Eno);
    danish.getDetail();

    danish.showData();

    return 0;
}
//  class Student
//  {
//     int id;
//     public:
//     string name;
//     void showData(void);
//  }DAnish , Shahzeb ,Arbaz;    // We can create opject like this.
