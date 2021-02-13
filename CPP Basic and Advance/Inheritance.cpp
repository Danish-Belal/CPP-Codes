// inheriting a base class into a drived class is known as inheritance.
#include <iostream>
using namespace std;

class Employee
{
public:
  int id;
  int salary = 35;

  Employee(int eid)
  {
    id = eid;
  }

  Employee() {}
};

// Declaring a drived class syntax
/*  
 class {{drived-class-name}} : {{visiblity-mode}} {{base-class-name}}
 {
     class / member / function etc.
 }
  Note:
  1: Default visiblity mode is private.
  2: Public visiblity mode: Public member of base class become public member of base class.
  3: Private visiblity mode: public member of base class become private member of base class.
  4: private member of base class  are never inherited.

*/

// declaring a drived class.
class programer : public Employee  //default visiblity mode privet . base class method are inherited privatelly.
{
public:
  programer(int pid)
  {
    id = pid;
  }
  programer(){}
  void print()
  {
    cout << "Id is: " << id << endl;
    cout << "Salery is: " << salary << endl;
  }
};

int main()
{
  Employee e1(7);
  cout << e1.id << endl
       << e1.salary << endl;

  programer p ;// p(10);
  p.id = 10;   //use it after declaring visiblity mode public.
  p.print();

  return 0;
}
