#include<iostream>
using namespace std;
int glow=6;
void sum(){
    cout<<glow;
}
int main(){
    int a= 14;
    int b= 2;
    int glow=4;
    glow=12;
    // when you will give space b/w 1 and 4 then error will throw
    std::cout<<"the value of a is "<< a<<"\nthe value of b is /"<<b;
    cout<<"\n";
    sum();
    cout<<glow;
    return 0;
}