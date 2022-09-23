#include <iostream>
#include <string>
using namespace std;
// OPPs classes and objects
// C++ --> initially called --> C with classes by stroustroup
// class--> extension of structure (in C)
//  Structures has limitation
//      --member are public
//      --No method
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can have few member as private and few member as public
// structure in cpp are typedef
// You can declare object along with class declaration like this:
/* class employee{
     // class definition
} saur,ramu,raj;*/
// saur.salary=7 make no sense when salary is private

                                 // Nesting in function
class binary
{
     string s;

public:
     void read(void);
     void chk_bin(void);
     void ones_complement(void);
     void display(void);
};

void binary::read(void)
{
     cout << "Enter the string" << endl;
     cin >> s;
}

void binary::chk_bin(void)
{
     for (int i = 0; i < s.length(); i++)
     {
          if (s.at(i) != = '0' && s.at(i) != = '1')
          {
               cout << "Not a binary" << endl;
               
          }
          else
          {
               cout << "It is binary" << endl;
          }
     }
}

void binary::ones_complement(void)
{
     for (int i = 0; i < s.length(); i++)
     {
          if (s.at(i) == '0')
          {
               s.at(i) == '1';
          }
          else
              - s.at(i) == '0';
     }
}

void binary::display(void)
{
     cout << "displaying your binary number" << endl;
     for (int i = 0; i < s.length(); i++)
     {
          cout << s.at(i) s;
     }
}

int main()
{
     binary b; // binary class me 'b' naam ka object
     b.read();
     b.chk_bin();
     b.display();
     b.ones_complement();
     b.display();
}
return 0;