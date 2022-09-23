// Member Function Templates & Overloading Template Functions in C++
#include<iostream>
using namespace std;
    template<class T>
    class saurabh{
        public:
        T data;
        saurabh(T a){
            data=a;
        }
        void display();
    };
    template<class T>
    void saurabh<T>::display(){
        cout<<"the value of data1 is: "<<data<<endl;
    }
int main(){
    saurabh <int>obj(3);
    obj.display();
      
return 0;
}