#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    /***** Selection control structure if- else-if-else ladder *****/
    // if((age<18)&&(age>1)){
    //     cout<<"You cannot come to my party"<<endl;

    // }
    // else if(age==18){
    //     cout<<"You are a kid and you can come"<<endl;
    // }
    // else if(age<1){
    //     cout<<"You are not born yet"<<endl;
    // }
    // else if(age>18){
    //     cout<<"Obviously you can come to my party"<<endl;
    // }

    /******* Switch-case statement*******/
    switch(age){
        case 1: (age==4);
        {
            cout<<"Your age is 1"<<endl; 
            break;
        }
        case 2:(age==5);
        {
            cout<<"Your age is 2"<<endl;
            break;
        }
       
        case 3:
        {
            cout<<"Your age is 3"<<endl;
            break;
        }
        case 23:
        {
            cout<<"Your age is 23"<<endl;
            break;
        }
        case 13:
        {
            cout<<"Your age is 13"<<endl;
            break;
        }
        default :
        {
            cout<<"You are not from above age"<<endl;
        }
    }
    
    return 0;
}