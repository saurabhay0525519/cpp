#include<iostream>
using namespace std;
                   /** call by value **/
// void swap(int a,int b){
//     int temp=a;
//     a=b;
//     b=a;
// }                  
                   /** call by reference **/
// void swap_pointer(int *a,int *b){
//     int temp;
//      temp= *a;  // value at address 'a' ki value ko temp me dal do. 
//     *a=*b;
//     *b=temp;
// }
                          /** call by reference using c++ reference **/
//    int &
   void swapreferencevar(int &a,int &b){
       int temp=a;
       a=b;
       b=temp;
    //    return a;
       
   }                       

int main(){
    int x=2,y=3;
    // swap(x,y);  // call by value
    cout<<"The value of a = "<<x<<" and b = "<<y<<endl;
    // swap_pointer(&x,&y); // call by reference
     swapreferencevar(x,y); // call by reference in c++
    //  swapreferencevar(x,y)=786;
    cout<<"The value of a = "<<x<<" and b = "<<y<<endl;
    return 0;
}