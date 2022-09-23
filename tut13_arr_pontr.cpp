#include<iostream>
using namespace std;
int main(){
    int marks[4]={45,36,79,74};
    int mathsmarks[5];
    mathsmarks[0]=369;
    mathsmarks[1]=469;
    mathsmarks[2]=342;
    mathsmarks[3]=798;
    cout<<"These are mathsmarks"<<endl;
    cout<<mathsmarks[0]<<endl;
    cout<<mathsmarks[1]<<endl;
    cout<<mathsmarks[2]<<endl;
    cout<<mathsmarks[3]<<endl;
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    marks[1]=69;
    // Array can be updated
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    
    // Arrays and pointer
    int *p=marks;
    cout<<"The value of *p is "<<*(p)<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}