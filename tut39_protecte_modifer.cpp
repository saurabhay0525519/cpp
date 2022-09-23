#include<iostream>
using namespace std;
class base{
    protected:
    int a;

    private:
    int b;

};
class derived : protected base{
    //ye derive hua hai base class se
    /*protected:
    int a; ye derive hua hai
    int b;*/
    
      
};
/*
                  private derive   public derive   protected derive
private member     not inherit       not inherit     not inherit
public member       private            public         protected
protected member     private           protected       protected         
*/

int main(){
    base b;
    derived d;
    //cout<<d.a;//kyo ki private ko protected derive me bhi inherit nahi kar sakte

    return 0;
}

