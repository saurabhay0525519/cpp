#include<iostream>
using namespace std;
// int factorial(int n){
//     if(n==1||n==0){
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     }
// }
int fib(int n){
    if(n<=2){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}

int main(){
    int a;
    cout<<"Enter the number to be factorise "<<endl;
    cin>>a;
    // cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<a<<"th element of fibonacce series is "<<fib(a)<<endl;

}