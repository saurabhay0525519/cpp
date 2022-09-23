//Writing our First C++ Template
#include<iostream>
using namespace std ;
template<class T>//T->int ,float,double,char etc
class vector{
    public:
    T *arr;//yaha pr T is liye lika kyo ki 'arr' variable int,float,char 
    // kisi bhi variable ka address store kar sakta hai
    int size;//yaha pr T is liye nahi lika kyo ki 'size' ki value int pass ho rahi hai
    vector(int m){
        size=m;
        arr=new T[size];//3 size ka array jiska pahle byte ka address arr pointer me store hai
    }
    T dotproduct(vector &v){
        T d=0;//yaha pr T is liye lika hai kyo ki 'd' ki value int,float,char kuch bhi
        // ho sakti hai.  
        for(int i=0;i<size;i++){
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};

int main(){
    vector<float>v1(3);
    v1.arr[0]=1.2;
    v1.arr[1]=4.3;
    v1.arr[2]=0.4;
    vector<float> v2(3);
    v2.arr[0]=1.3;
    v2.arr[1]=2.7;
    v2.arr[2]=2.1;
    float a=v1.dotproduct(v2);
      cout<<a<<endl;
return 0;
}