#include<iostream>
using namespace std ;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
class test{
    int a;
    int b;
    public:
    // test(int i,int j) :a(i),b(j)
    // test(int i,int j):a(i),b(i+j)
    // test(int i,int j):a(i),b(a+j)
    // test(int i,int j):b(i),a(b+j)// a-->garbage value dega kyo ki 'a' phle declare to 'a' value pahle jaygi aur tab tak 'b'ki jante nhi hai
    // test(int i,int j):b(i),a(j)
    test(int i,int j):b(j),a(i)
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};

int main(){
    test saurabh(4,8);
      
return 0;
}