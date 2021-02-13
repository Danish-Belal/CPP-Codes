#include<iostream>
using namespace std;
class Shop
{
  int id ;
  float price;
  public:
    void set_Data(int a , int b)
    {
         id = a ;
         price = b;
    }
    void get_data(void)
    {
        cout<<"Id of item is: "<<id<<endl;
        cout<<"price of item is: "<<price<<endl;
        
    }

};
 
 
int main()
{
    int size = 3;
   // int *ptr = &size;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr; 
    for (int i = 0; i < size; i++)
    {
        int d , p;
       cout<<"Enter id and price of item: "<<endl;
       cin>>d>>p;
       ptr->set_Data(d,p);
       ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        ptrTemp->get_data();
        ptrTemp++;
    }  

  return 0;
}





