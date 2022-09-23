#include<iostream>
using namespace std;
class calculator{
    int x,y;
    public:
    friend calculator sumreal(calculator,calculator);
    void setnumber(int a,int b){
        x=a;
        y=b;
    }
    void printnumber(){
        cout<<"the sum is "<<x<<"+"<<y<<endl;
    }
};
calculator sumreal(calculator o1,calculator o2){
    return(o1.x+o2.x);
}

int main(){
    calculator o1,o2,o3;
    o1.setnumber(4,5);
    o2.setnumber(3,4);
    int res=sumreal(o1,o2);
    cout<<"the sum of real part is "<<res<<endl;

    return 0;
}