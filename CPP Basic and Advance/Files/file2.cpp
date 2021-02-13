#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // // Connecting our file with dout stram.
    ofstream dout("sample2.txt");

    // // Creating a name stream and filling it with the string entered by the user.
    string name;
    cout << "Enter your name: ";

    cin >> name;

    // // Writing a string to the file.
    dout << " My name is: " + name;
    dout.close();

    string data;
    ifstream din("sample2.txt");
    // din>>data;
    getline(din, data);
    cout << "The Data in this file is\n " + data;
    din.close();

    return 0;
}