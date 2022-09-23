#include<iostream>
using namespace std ;
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
class base1{
    int data1;
    public:
    base1(int i){
        data1=i;
        cout<<"base1 class constructor called"<<endl;
    }
    void printdatabase1(void){
        cout<<"the value of data1 is  "<<data1<<endl;
    }
};
class base2{
    int data2;
    public:
    base2(int i){
        data2=i;
        cout<<"base2 class constructor called"<<endl;
    }
    void printdatabase2(void){
        cout<<"the value of data2 is "<<data2<<endl;
    }
};
class derived:public base1,public base2{//yaha par jis clss ka nam pahle lika hog usi ka conttr pahle cll hoga.
    int derived1,derived2;              //agar virtual clss hoga to pahle virtual clss conttr cll hoga, bhale hi wh bad me kyo n lika ho.
    public:                             //agar dono virtual clss hoga to, jo pahle  lika hoga usi ka contr cll hoga.
    derived(int a,int b,int c,int d): base1(a),base2(b){
        derived1=c;
        derived2=d;
        cout<<"derived class constructor called"<<endl;
        
    }
    void printdataderived(void){
        cout<<"the value of derived1 is "<<derived1<<endl;
        cout<<"the value of derived2 is "<<derived2<<endl;

    }
};

int main(){
      derived saurabh(1,2,3,4);
      saurabh.printdatabase1();
      saurabh.printdatabase2();
      saurabh.printdataderived();
return 0;
}