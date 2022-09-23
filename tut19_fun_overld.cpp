#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
// Volume of cylinder
int volume(int a,int b){
    return(3.14*a*a*b);
}
// Volume of cuboid
int cuboid(int a,int b,int c){
    return(a*b*c);
}
// Volume of cube
int cube(int a,int b){
    return(a*a*a);
}

int main(){
    int a=2,b=6,c=9;
    cout<<"The sum of 2 and 6 is  "<<sum(2,6)<<endl;
    cout<<"The sum of 2,6 and 9 is"<<sum(2,6,9)<<endl;
    cout<<"The volume of radius 2 and height 6 is "<<volume(2,6)<<endl;
    cout<<"The volume of cuboid is "<<cuboid(2,6,9)<<endl;
    cout<<"The volume of cube is "<<cube(2,6);
}
