#include<iostream>
using namespace std;
 class Y;
class X{
    int data;
    public:
    void setdata(int value){
        data=value;
    }
    friend void sum(X,Y);
};
class Y{
    int num;
    public:
    void setdata(int value){
        num=value;
    }
    friend void sum(X,Y);
};
void sum(X o1,Y o2){
    cout<<"the sum of object 1 value and object 2 value is "<<o1.data+o2.num<<endl;
}

int main(){
    X a1;
    a1.setdata(4);
    Y a2;
    a2.setdata(5);
    sum(a1,a2);

    return 0;
}