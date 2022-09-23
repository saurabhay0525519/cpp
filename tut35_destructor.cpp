#include<iostream>
using namespace std;
int count=0;
class test{
    
 

    public:
    test(){
        count++;
        cout<<"what is constructor "<<count<<endl;
    }
    ~test(){
    cout<<"this is destructor called when object  going to destroy "<<count<<endl;
    count--;
    }
};

int main(){
    test t0,t1,t2,t3;
    

    return 0;

}