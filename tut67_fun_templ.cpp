// C++ Function Templates & Function Templates with Parameters
#include<iostream>
using namespace std;

// float funAvg(int a,int b){
//     float c=(a+b)/2;
//     return c;
// }
template<class T1,class T2>//function template
float funAvg(T1 a,T2 b){
    float c=(a+b)/2;
    return c;
}

template<class T1,class T2>
void swapp(T1 &a,T2 &b){
    T1 temp=a;
    a=b;
    b=temp;
}

int main(){
    float c=funAvg(5,5.9);
    printf("the average of two number is:%0.3f",c);
    printf("\n<-----X------>\n");
    int a=6,b=9;
    swapp(a,b);
    cout<<a<<endl<<b;
      
return 0;
}