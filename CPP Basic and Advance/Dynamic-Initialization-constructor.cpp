// In Dynamic initialization of constructor , which constructor hava to call decide at runtime (uder giving input)

#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int year;
    float rate;
    float returnamount;

public:
    BankDeposit() {} // Balnck/default constroctor has created to initialize object without passing parameter.
    BankDeposit(int p, int y, int r)
    {
        principal = p;
        year = y;
        rate = float(r) / 100;
        for (int i = 0; i < y; i++)
        {
            returnamount = principal;
            returnamount = returnamount * (1 + rate);
        }
    }

    BankDeposit(int p, int y, float r)
    {
        principal = p;
        year = y;
        rate = r;
        for (int i = 0; i < y; i++)
        {
            returnamount = principal;
            returnamount = returnamount * (1 + r);
        }
    }
    void Print()
    {
        cout << "Your Total amout after " << year << " on principal " << principal << " is: " << returnamount << endl;
    }
};

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    int R;
    float r;

    cout << "Enter p , y  and r: \n";
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r); // here we are using class as a DataType.
    bd1.Print();

    cout << "Enter p , y  and r: \n";
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.Print();

    // bd3.Print();  // will throw garbage value. it use only for creating objects at run time.
    return 0;
}




