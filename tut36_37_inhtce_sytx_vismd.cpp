#include <iostream>
using namespace std;
// Base class
class employee
{
    float salary;

public:
    int id;
    employee()//constructor hai
    {
    }

    employee(int inpid)
    {
        id = inpid;
        salary = 39.0;
    }
};
// Derived class syntax
/*
class {{derived-class-name}}:{{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1.default visibility mode is private
2.public visibility mode:public member of base class become public member of derived class.
3.private visibility mode:public member of base class become private member of derived class.
4.private are never inherited.
*/
class programmer :public employee
{
public:
    int languagecode;
    programmer(int inpid)
    {
        id = inpid;
    }
     languagecode = 9;
    void getdata()
    {
        cout << id << endl;
    }
    programmer(){}
};

int main()
{
    employee saurab(4), rohan(6);
    /*cout<<saurab.salary<<endl; dont know why not running.
    cout<<rohan.salary<<endl;*/
    programmer skillf(4);
    cout << skillf.languagecode << endl;
    cout << skillff.id << endl; // error because id is privately inherited, work when we inherited it public.
    skillf.getdata();

    return 0;
}