// templates who create class.
// class is also templat e foe object . but Template create class.
// syntax --> template <class T> now T will be used as a data type.

template <class T>

class vector
{

public:
  T *arr;
  int size;
  vector(int m)
  {
    size = m;
    arr = new T[size];
  }
  T dotProduct(vector &v)
  {
    T d = 0;
    for (int i = 0; i < size; i++)
    {
      d += this->arr[i] * v.arr[i];
    }
    return d;
  }
};

#include <iostream>
using namespace std;
int main()
{
  // vector v1(3);
  // v1.arr[0] = 9;
  // v1.arr[1] = 7;
  // v1.arr[2] = 2;

  // vector v2(3);
  // v2.arr[0] = 8;
  // v2.arr[1] = 3;
  // v2.arr[2] = 6;

  // int a = v1.dotProduct(v2);
  // cout << a << endl;

  // for float.
  vector<float> v1(3);   // by using template we can pass different data type like double , long etc.
  v1.arr[0] = 1.4;
  v1.arr[1] = 3.3;
  v1.arr[2] = 0.1;

  vector<float> v2(3);
  v2.arr[0] = 0.1;
  v2.arr[1] = 1.90;
  v2.arr[2] = 4.1;

  float a = v1.dotProduct(v2);
  cout << a << endl;
  return 0;
}
