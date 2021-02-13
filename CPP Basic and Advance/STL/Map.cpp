// Map is used to store key value pair. Map is an associative Array.
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> marks;
    marks["Danish"] = 90;
    marks["Shahzeb"] = 80;
    marks["Arbaz"] = 45;
    marks["Motasim"] = 91;

    marks.insert({{"irfan ", 20}, {"Rehan", 50}});
    map<string, int>::iterator itr;
    for (itr = marks.begin(); itr != marks.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << "\n";
    }
    cout << "The size is: " << marks.size() << endl;
    cout << "Max max_size is: " << marks.max_size() << endl;
    cout << "The empty is: " << marks.empty() << endl;

    return 0;
}
