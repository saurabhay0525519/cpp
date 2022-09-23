// C++ Templates: Templates with Multiple Parameters
#include<iostream>
using namespace std;
    template<class t1,class t2>//t1 and t2 are custom(int,float,char) data type
    class myclass{
        t1 data1;
        t2 data2;
        public:
        myclass(t1 a,t2 b){
            data1=a;
            data2=b;
        }
        void display(){
            cout<<data1<<endl<<data2;
        }
    };

int main(){
    myclass <float,char>obj(4.45,'p');
    obj.display();
      
return 0;
}