#include<iostream>
using namespace std;
void cllbyrefnce(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;

}
int main(){
    int a=4,b=6;
    cllbyrefnce(a,b);
    cout<<"the  value of a = "<<a<<endl<<"the value of b = "<<b<<endl;
    return 0;
}