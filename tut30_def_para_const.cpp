#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex();         // default constructor
    complex(int, int); // parameterized constructor
    void printnumber()
    {
        cout << "the sum of " << a << " + " << b << "i" << endl;
    }
};
complex::complex(int x, int y)
{ // this is parameterized constructor as accept 2 paramter
    a = x;
    b = y;
}

int main()
{
    // complex c;
    // implicit call
    complex c(4, 5);
    c.printnumber();
    // explicit call
    complex d = complex(6, 4);
    d.printnumber();

    return 0;
}