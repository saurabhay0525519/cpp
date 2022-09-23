#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(){
        a=0;
        b=0;
    }
    complex(int x,int y){
        a=x;
        b=y;
    }
    complex(int x){
        a=x;
        b=0;
    }
   void printnumber(){
        cout<<"the sum is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    complex c1(9,8),c2,c3(4);
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    
    

    return 0;
}