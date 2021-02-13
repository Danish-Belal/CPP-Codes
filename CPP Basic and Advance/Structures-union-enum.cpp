// Structure is user define Data type. use to combine different data type
// Unions are as same as Structure but they provide better memory Management.

#include <iostream>
using namespace std;

typedef struct Employee
{
  int id;
  string name;
  int roll;
} ep;

// Union.  in Union we can use one data type at a time. It save memory, if we apply other variable then value will override.
union Exchange
{
  int money;
  string car;
  int rice;
};

int main()
{

  struct Employee Danish;
  Danish.id = 100;
  Danish.name = "Belal";
  cout << Danish.name << endl;

  ep Belal;
  Belal.id = 200;
  Belal.name = "Danish";
  cout << Belal.name << endl;

  /*
  union Exchange a;
   a.car = "Yellow";
   a.money = 3000;   // Value of a is overloaded by money value
   */

  // Emun--> we can give out value to a integer Value.

  enum Meal
  {
    breakfast,  lunch,  dinner };

  // cout<<breakfast;
  // cout<<lunch;
  // cout<<dinner;
   Meal m1 = breakfast;
   cout<<m1;            // It will return 0
  return 0;
}
