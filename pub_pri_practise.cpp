#include<iostream>
using namespace std;

class company{
    private:
    int a,b,c;
    public:
    int c,d;
    void setdata(int a1,int b1,int c1);
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
    }
};
 void company::setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    company saurab;
    saurab.c=46;
    saurab.d=89;
    saurab.setdata(1,3,4);
    saurab.getdata();

    return 0;
}