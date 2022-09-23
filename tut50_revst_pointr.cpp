#include<iostream>
using namespace std ;

int main(){
    // int a=5;
    // int *ptr=&a;
    // cout<<"the value of a is "<<*ptr<<endl;

    //new operator
    // float *p=new float(38.32);
    // cout<<"the value at address p is "<<*p<<endl;

    int *arr=new int[3];//'new' opertor allocate memory and return allocated memory to pointer variable
    arr[0]=10;
    arr[1]=20;
    arr[2]=3670;
    delete[] arr;// 'delete' operator destroy all array or deallocate memory
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;

      
return 0;
}