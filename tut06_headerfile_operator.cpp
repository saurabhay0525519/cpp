#include<iostream>
// #include "this.h"
using namespace std;
int main(){
    // cout<<"This is a money";
    int a=4,b=5;
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;

    //logical operator
    cout<<"The value of logical operator (a==b && a<b) "<<(a==b &&a<b)<<endl;
    cout<<"The value of logical operator (a==b || a<b)"<<(a==b || a<b)<<endl;
    cout<<"The value of logical operator (!(a==b))"<<(!(a==b))<<endl;
    return 0;
}