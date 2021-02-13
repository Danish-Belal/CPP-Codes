#include <iostream>
using namespace std;

template <class T>
class Danish
{
public:
    T data;
    Danish(T data)
    {
        this->data = data;
    }
    void display();
};

template <class T>
void Danish<T>::display() // Can also use templet form outside the class with function.
{
    cout << "The data is: " << data << endl;
};

void fun(int a)
{
   cout << "This is first function." << a << endl;
}

template <class T>
void fun(T a)
{
    cout << "This is template function." << a << endl;
}
int main()
{
    //   Danish<string> D("Danish");
    // Danish<int> D(14);
    // cout << D.data << endl;
    // D.display();

    fun(6);     // Exact match takes the highest priority.
    fun('C');  // Data type will not match so templet function will run.
    return 0;
}