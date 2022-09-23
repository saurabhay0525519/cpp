#include<iostream>
using namespace std;
// int c=45;
int main(){
    // int a,b,c;
    // cout<<"Enter the value of a "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b "<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"The value of c is "<<c<<endl;
    // cout<<"The value of c is "<<::c<<endl;
    
    // float d=33.5f;
    //**** by default float ko compiler double leta hai.If 'f'is not mention like above

    // long double e=33.5l;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    // cout<<"The size of 33.5 is "<<sizeof(33.5)<<endl;
    // cout<<"The size of 33.5f is "<<sizeof(33.5f)<<endl;
    // cout<<"The size of 33.5F is "<<sizeof(33.5F)<<endl;
    // cout<<"The size of 33.5l is "<<sizeof(33.5l)<<endl;
    // cout<<"The size of 33.5L is "<<sizeof(33.5L)<<endl;
    
    /****Reference variable******/
    // reference variable: alternative name for existing variable
    // float x=314;
    // float &y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    /******Typecasting*******/
    // Typecasting mean changing its data type:int to float
    int a=23;
    float b=56.43;
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    cout<<"The value of b is same as above one "<<(int)b<<endl;
    cout<<"The size of b is "<<sizeof(56.43)<<endl;
    int c=int(b);
    cout<<"The value of c is "<<c<<endl;
    cout<<"Sum is "<<a+b<<endl;
    cout<<"Sum is "<<a+(int)b<<endl;
    cout<<"Sum is "<<a+int(b)<<endl;


    return 0;
}