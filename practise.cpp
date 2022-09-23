#include<iostream>
using namespace std;
class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1);
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
   
    }
};
 void employee:: setdata(int a1,int b1,int c1){
        a=a1;
        b=b1;
        c=c1;
    }

int main(){
    // int a=2;
    // int b=3;
    //  b=4;
    // cout<<"the sum of a and b is "<<a+b<<endl;
    // cout<<endl;

    // int num1,num2;
    // cout<<"enter the first num"<<endl;
    // cin>>num1;
    // cout<<num1<<endl;

    // cout<<"enter the second num"<<endl;
    // cin>>num2;
    // cout<<num2;
    
    employee saurab;
    saurab.d=45;
    saurab.e=53;
    saurab.setdata(1,3,4);
    saurab.getdata();

    return 0;
}