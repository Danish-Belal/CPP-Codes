#include <iostream>
using namespace std;
class Employee
{
    int id;
    //Static variable. Every function/variable can use a static variable .

    static int counter;              //also known as class variable. this is the propety of a class.

public:
    void setData(void)
    {
        cout << "Enter Employee id" << endl;
        cin >> id;
        counter++;
    }

    void printData(void)
    {
        cout << "This employee id is: " << id << endl;
        //cout << "No of this employee is: " << counter << endl;
    }

    static void getCount(void)           // Static Member Function. --> create to access only static member/variable of a class.
    {
        cout << "The value of counter is " << counter << endl;
    }

} danish, shahzeb, arbaz; //we can create object here.

// count is static Data Member of class Employee.

int Employee ::counter; // By default value 0 .

int main()
{
    // Employee danish , shahzeb , arbaz;

    danish.setData();
    danish.printData();
    Employee ::getCount();

    shahzeb.setData();
    shahzeb.printData();
    Employee ::getCount();

    arbaz.setData();
    arbaz.printData();
    Employee ::getCount();

    return 0;
}
