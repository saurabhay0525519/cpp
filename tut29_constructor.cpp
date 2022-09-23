#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    // creating constructor
    // constructor is a special member function with same name as of the class.
    // it is used to initialize the object of its class
    // it  automatically invoked(called) whenever an object is created
    complex(void); // constructor declaration
    void printdata()
    {
        cout << "the sum of a and b is " << a << " + " << b << " i" << endl;
    }
};
complex ::complex(void)  //--> this is default constructor
{
    a = 10;
    b = 5;
}

int main()
{
    complex c1, c2, c3;
    c1.printdata();
    c2.printdata();
    c3.printdata();

    return 0;
}
/* charactersitics of constructor 
1.It should be declare in the public section of class.
2.They automatically invoked whenever the object is created.
3.They cannot return value and do not have return type.
4.It can have default argument.
5.We cannot refer to it address.
