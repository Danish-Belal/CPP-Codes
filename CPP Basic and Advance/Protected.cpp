#include <iostream>
using namespace std;
/* Ther are three types of Data/ member in cpp.
 1: Private.
 2: Public.
 3: Protected.

 */
class Base
{
    int a = 50;

protected: //protected member
    int b = 10;

public:
    int c = 10;
    void data(void)
    {
        cout << b << " this is base class public member" << endl;
    }
};

/*
For a Protected member.

                            Public Derivation               Private Derivation          Protected Derivation     
1: Private Member              Not inherited                   Not Inherited                Not inherited
2: Public Member                Public Private                  private                       protected
3: Protected Member             Public                          private                        Protected

*/

class Drived : protected Base      // Visiblity mode --> Private Member.
{
    // prtected : void Data();   // Data will drived here in protected mode.
public:
    void show(void)
    {

        void data(); 

        cout << b << " This is Drive class " << endl; // Accessing protected member of base class in drive class by protected visiblity mode.
    }
};

int main()
{
    Base B;
    Drived D;
    B.data();

    D.show();

    return 0;
}