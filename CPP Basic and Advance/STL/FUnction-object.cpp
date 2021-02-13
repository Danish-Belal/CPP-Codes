// Funcition object(Functor) :->  Function wrapped in a class so that it availabe like object.

#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {56, 75, 33, 23, 45, 6, 1};
    //sort(arr , arr+7);
    sort(arr, arr + 7, greater<int>()); //function object

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;

    // visit cpp reference page to explore more.
}