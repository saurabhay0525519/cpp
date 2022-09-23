#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){ //default constructor hai
        a=0;
    }
    number(int n){
        a=n;
    }
    number(number &t){//number class ke ek object ko lo or copycontructor declaration
        a=t.a;
    }
    void display(){
        cout<<"the value of a is "<<a<<endl;
    }
};

int main(){
    number z1(44),z2,z3(97);
    // z1.number();
    z1.display();
    z2.display();
    z3.display();
    number x(z1);//x=z1 and copy constructor
    x.display();
    
    return 0;


}