#include<iostream>
using namespace std;
int count=0;
class num{

    public:
    num(){
        count++;
        cout<<"this is the time when constructor is called for object no."
        <<count<<endl;
    }
    ~num(){
        cout<<"this is the time when my destructor is called for object no."
        <<count<<endl;
        count--;
    }
};

int main(){
    cout<<"we are inside main function"<<endl;
    cout<<"creating first object n1 "<<endl;
    num n1;
    {
        cout<<"entering this block "<<endl;
        cout<<"creating two more object"<<endl;
        num n2,n3;
        cout<<"exiting this block"<<endl;
    }
    
    return 0;

}