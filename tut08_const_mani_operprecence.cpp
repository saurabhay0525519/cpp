#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=23;
    cout<<"The value of a is "<<a<<endl;
    a=44;
    cout<<"The value of b is "<<a<<endl;
   const int c=34;
   cout<<"The value of c is "<<c<<endl;
//    c=42;
   cout<<"The value of c is "<<c<<endl;

   /****Manipulator****/
   int x=2;
   int y=46;
   int z=356;
   cout<<"The value of x without setw is "<<x<<endl;
   cout<<"The value of y without setw is "<<y<<endl;
   cout<<"The value of z without setw is "<<z<<endl;
   cout<<"The value of x with setw is "<<setw(4)<<x<<endl;
   cout<<"The value of y with setw is "<<setw(3)<<y<<endl;
   cout<<"The value of z with setw is "<<setw(3)<<z<<endl;
}
