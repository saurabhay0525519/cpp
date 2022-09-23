#include<iostream>
using namespace std;
class complex;//forward declaration
class calculator{
   
    public:
    int add(int a,int b){
        return(a+b);
    }
    int sumrealcomplex(complex ,complex );
    int sumcompcomplex(complex,complex);
};

class complex{
    int a,b;
    //individually declaring calculator function as friend in other class
    // friend int calculator::sumrealcomplex(complex,complex);
    // friend int calculator::sumcompcomplex(complex,complex);

    //wholy declaring calculator function as friend of complex class.
    friend class calculator;

    public:
    void setnumber(int x,int y){
        a=x;
        b=y;
    }
    void printnumber(){
        cout<<"the sum is "<<a<<"+"<<b<<"i"<<endl;
    }
    

};
int calculator::sumrealcomplex(complex o1,complex o2){
    return (o1.a+o2.a);
}
int calculator::sumcompcomplex(complex o1,complex o2){
    return (o2.b+o2.b);
}


int main(){
    complex o1,o2;
    o1.setnumber(1,4);
    o2.setnumber(5,7);
    calculator calc;
    int res=calc.sumrealcomplex(o1,o2);
    cout<<"the sum of real part of o1 and o2 is "<<res<<endl;
    int resc=calc.sumcompcomplex(o1,o2);
    cout<<"the sum of complex part of o1 and o2 is "<<resc<<endl;


    return 0;
}