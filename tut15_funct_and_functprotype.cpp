#include<iostream>
using namespace std;
int sum(int,int);

/* Function prototype tell the compiler that you might get function. and that function  will
 receive two int value and return int value .*/ 
  
  void g(void); 

  

int main(){
    int num1,num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1,num2);
      g();
    return 0;
}
int sum(int a,int b){
    // Formal parameter a and b is taking value from actual parameter
    int c=a+b;
    return c;
}
void g(){
     cout<<"\nHello cpp you are very dangereous";
}