// Abstract base class :-> Abstract base class is a class which have atlest one pure vitual function. it create to creates others drive classes and work on them
// Pure virtual function :-> pure vitual class is a claa in abstract base class which need to overwrite for every drive class object.
#include <iostream>
using namespace std;
class Base
{
protected:
  string name;
  int id;

public:
  Base(string name, int id)
  {
    this->name = name;
    this->id = id;
  }
  // virtual void display() {} 
  virtual void display() = 0 ;//Do nothing function --> pure virtual function. no any drive class can redefine it. for every dive class we need to create their display function.
};
class Student : public Base
{
  int roll_no;
  int Class;

public:
  Student(string name, int id, int roll_no, int Class) : Base(name, id)
  {
    this->roll_no = roll_no;
    this->Class = Class;
  }
  void display()
  {
    cout << "Student Name is: " << name << endl;
    cout << "Student id is: " << id << endl;
    cout << "Student Roll is: " << roll_no << endl;
    cout << "Student class is: " << Class << endl;
  }
};
class Staff : public Base
{
  float salery;
  float working_hour;

public:
  Staff(string name, int id, float salery, float working_hour) : Base(name, id)
  {
    this->salery = salery;
    this->working_hour = working_hour;
  }
  void display()
  {
    cout << "Staff Name is: " << name << endl;
    cout << "Staff id is: " << id << endl;
    cout << "Staff salery is: " << salery << endl;
    cout << "Staff Working hour is: " << working_hour << endl;
  }
};

int main()
{
  

  string Sname = "Danish";
  int Sroll = 14;
  int Sclass = 12;
  int Sid = 1001;
  Student S(Sname, Sid, Sroll, Sclass);

  string Sfname = "Chotu";
  int salery = 30000;
  float Working_hour = 5.3;
  int Sfid = 1002;
  Staff Sf(Sfname, Sfid, salery, Working_hour);

  Base *Base_pointer[2];
   Base_pointer[0] = &S;
   Base_pointer[1] = &Sf;
   Base_pointer[0]->display();
   Base_pointer[1]->display();


  return 0;
}
