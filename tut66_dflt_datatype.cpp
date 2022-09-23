// Class Templates with Default Parameters
#include<iostream>
using namespace std;
    template<class t1=float,class t2=int,class t3=int>//default data type of t1&t2
    class saurabh{
        t1 data1;
        t2 data2;
        t3 data3;
        
        public:
        saurabh(t1 a,t2 b,t3 c){
            data1=a;
            data2=b;
            data3=c;
        }
        void display(){
            cout<<"the value of data1 is "<<data1<<endl;;
            cout<<"the value of data2 is "<<data2<<endl;
            cout<<"the value of data3 is "<<data3<<endl;
        }
    };
int main(){
    // saurabh<> obj(4,3.9);//agar angular bracket me kuch nahi lika hoga
    //toh default data type lega.
    saurabh<int,float,char>obj1(4,3.5,'a');
    obj1.display();
      
return 0;
}