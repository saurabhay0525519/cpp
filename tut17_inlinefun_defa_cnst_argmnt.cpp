#include <iostream>
using namespace std;
int pdt(int a, int b)
{
    // not recommended to use with inline function
    static int c = 0; // work only once
    c += 1;    // value get incremented and restored everytime when it is called.
    return a * b + c;
}
int moneyrecive(int money,float interest=1.4)
{
            return money*interest;
}
int strlen(cont int*ptr){
// cont argument instruct compiler that argument value should not be changed at any cost.
}

int main()
{
    // int a, b;
    // cout << "Enter the two number a and b" << endl;
    // cin >> a >> b;
    // when inline function is called pdt(a,b) replace by inline function code i.e return a*b
    // cout << "The product of two number is " << pdt(a, b) << endl;
    // cout << "The product of two number is " << pdt(a, b) << endl;
    // cout << "The product of two number is " << pdt(a, b) << endl;
    int money=10000;
    cout<<"The money you will receive after one year is "<<"Rs "<<moneyrecive(money,2.4)<<endl;
}