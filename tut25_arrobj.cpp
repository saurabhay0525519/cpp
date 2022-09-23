#include<iostream>
using namespace std;
class employee{
    int id;
    public:
    void setdata(void){
        cout<<"enter the id"<<endl;
        cin>>id;
    }
    void getdata(void){
        cout<<"the employee id is "<<id<<endl;
    }
};
int main(){
    employee fb[4]; //object array 
    for (int i = 0; i < 4; i++)
    {
    fb[0].setdata();
    fb[0].getdata();
       
    }
    

    return 0;
}