#include <iostream>
using namespace std;
class Base
{
protected:
  string name;
  int id;

public:
  void get_Data(string name, int id)
  {
    this->name = name;
    this->id = id;
  }
  virtual void display()
  {
    cout << "This this base class" << endl;
  };
};
class Student : public Base
{
  int roll_no;
  int Class;

public:
  void set_Student_Data(int roll_no, int Class)
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
  void set_Staff_Data(float salery, float working_hour)
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
  //  Base B;
  // // B.get_Data("Danish" , 1001);
  // // B.display();

  Student S;
  // S.get_Data("Danish" , 1001);
  // S.set_Student_Data(14,12);
  // S.display();

  Staff Sf;
  // Sf.get_Data("Chotu" , 1234);
  // Sf.set_Staff_Data(30000,5.30);
  // Sf.display();

 // Base *base_pointer;
  //base_pointer = &S;
  //base_pointer = &Sf;

  // base_pointer->get_Data("Danish" , 1001);

  //Student *student_pointer;
  //student_pointer = &S;
 // base_pointer->get_Data("Danish", 1001);
  //student_pointer->get_Data("Danish", 1001);
 // student_pointer->set_Student_Data(14, 12);
 // base_pointer->display();
  //student_pointer->display();

  // Staff *staff_pointer;
  // staff_pointer = &Sf;
  // base_pointer->get_Data("Chotu ", 1234);
  // staff_pointer->set_Staff_Data(30000, 5.30);
  // base_pointer->display();


  // Array of pointer of base class.
  Base *Ptr[2];
  Ptr[0] = &S;
  Ptr[1] = &Sf;

  Ptr[0]->get_Data("Danish" , 1002);
  Ptr[1]->display();


  return 0;
}



/*
  Rules for virtual function.
  1: They can not be static.
  2: They are accessed by object pointer.
  3: Virtual function can be a friend of another base class.
  4: A virtual function in base class might not be used.
  5: A virtual function define in a base class there is no necessity of redefining it in the drive class.

*/
