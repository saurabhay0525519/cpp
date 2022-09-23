#include<iostream>
using namespace std ;

class base1{
    public:
    void greet(){
        cout<<"what are you doing"<<endl;
    }
};
class base2{
    public:
    void greet(){
        cout<<"I am doing nothing"<<endl;
    }
};
class base3:public base1 ,public base2{
    
    public:
    void greet(){
        base1::greet();//removing ambiguity
    }

};
class base4{
    public:
    void show(){
        cout<<"hello world"<<endl;
    }
};
class base5:public base4{
    // public:
    // void show(){
    //     cout<<"hello world part 2"<<endl;
    // }
};
class base6{
    public:
    //function cannot be overloaded error will be display
    void say(){
        cout<<"hello saurabh"<<endl;
    }
    void say(){
        cout<<"hello yadav"<<endl;
    }
};
int main(){
    // base1 b1obj;
    // base2 b2obj;
    // b1obj.greet();
    // b2obj.greet();
    // base3 b3obj;
    // b3obj.greet();
    // base5 b5obj;
    // b5obj.show();
    base6 obj;
    obj.say();
    
    
      
return 0;
}