#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        //cout<<v.at(i)<<" ";   // v.at(i) also used to add element at i position in vector
    }
    cout << endl;
}

int main()
{
    // int size;
    // cout << "Enter the size of array: ";
    // cin >> size;

    // vector<int> vectr;
    // int element;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter element on index " << i << ": ";
    //     cin >> element;
    //     vectr.push_back(element); // Push_back used to insert element in vector.
    // }
    // // vectr.pop_back();   // Pop_back() pop end element.
    // display(vectr);

    // vector<int>::iterator iter = vectr.begin(); // use iterator to point index.
    // //vectr.insert(iter, 10);         // inset 10 where iterator will point.
    // // vectr.insert(iter+3 , 20);         // inset 20 on 3rd index.(4th element)
    // //vectr.insert(iter+2 , 20, 20);      // insert 20 , 20 (2 times) on index 2,3;
    // display(vectr);

    // Ways to create vector.
    //vector<int> Vec1;  // Zero length integer vector.
    //display(Vec1);

    vector<char> vec2(4); // 4 element character vector;
    // vec2.push_back('D');
    // vec2.push_back('A');
    // vec2.push_back('N');
    // vec2.push_back('I');
    // display(vec2);

    // vector <char> vec3(vec2);   // 4 element character vector from vec2.
    // display(vec3);

    vector<int> vec4(4, 6); // 4 element vector of 6.
    display(vec4);
    cout << vec4.size();
    


    return 0;
}