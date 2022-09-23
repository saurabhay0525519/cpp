#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    friend complex sumcomplex( complex o1,complex o2);// friend function declaration
    void printdata(void){
        cout<<"the sum is "<<a<<" + "<<b<<"i"<<endl;
    }
};
  //friend function definition is always outside class
complex  sumcomplex( complex o1,complex o2){
    complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));//o1.a-->o1 object se 'a' ki value ko access karo
    return o3;
}

int main(){
complex c1,c2,sum;
c1.setdata(1,2); // c1 == caller object 
c1.printdata();

c2.setdata(3,4);
c2.printdata();

sum=sumcomplex(c1,c2);
sum.printdata();


    return 0;
}