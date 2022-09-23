#include<iostream>
using namespace std;

class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1);  // Declaration
    void getdata(){  // print data
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};
void employee::setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    employee saurab;  //-->employee class ka object hai
    // saurab.a=2; //throw error because 'a' is private
    saurab.d=45;
    saurab.e=89;
    saurab.setdata(1,2,4);
    saurab.getdata();
    


    return 0;
}