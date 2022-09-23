#include<iostream>
using namespace std ;
class complex{
    int real,imaginary;
    public:
    void set_data(int a,int b){
        real=a;
        imaginary=b;
    }
    void get_data(void){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;
    }
};

int main(){
    
    // complex *ptr = new complex;
    // (*ptr).set_data(4,8);//always bracket because '.'operator has higher precedence than '*'
    // (*ptr).get_data();
    //         //OR
    //  complex *ptr = new complex;
    //  //(*ptr).set_data()==ptr->se_data()
    // ptr->set_data(4,8);//ptr points to set_data()
    // ptr->get_data();

    //Array of object
    complex *ptr1=new complex[4];
    ptr1->set_data(4,7);
    ptr1->get_data();

       
return 0;
}