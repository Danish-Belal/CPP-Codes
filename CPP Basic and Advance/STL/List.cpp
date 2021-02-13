#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l)
{
    list<int> :: iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;   
}
int main()
{
   // list<int> list1;        // list with 0 length.
   // list1.push_back(5);
   // list1.push_back(4);
   // list1.push_back(3);
    // list1.push_back(2);
    // list1.push_back(1);
    // display(list1);

     list<int> list2(5);
    list<int> :: iterator itr;
    cout<<"Enter your elements"<<endl;
    for ( itr= list2.begin(); itr != list2.end(); itr++)
    {
        cin>>*itr;
        
    }
    // display(list2);
    //list2.pop_back();     // used to remove element from back/end
    //display(list2);
   // list2.pop_front();   //  used to remove element from front
   // display(list2);
   // list2.remove(2);  // used to remove element from middle

    // list2.sort();      // sorting the element
    // display(list2);
    
   // list2.merge(list1);     // merge the element
   // display(list2);

    list2.reverse();        // reverse a list.
    display(list2);

    
  return 0;
}















