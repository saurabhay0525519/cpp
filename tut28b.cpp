#include<iostream>
using namespace std;
class c2;
class c1{
    int val1;
    friend void swap(c1 &,c2 &);
    public:
    void setdata(int val){
        val1=val;
    }
    void display(void){
        cout<<val1<<endl;
    }
};
class c2{
    int val2;
    friend void swap(c1 &,c2 &);
    public:
    void setdata(int val){
        val2=val;
    }
    void display(void){
        cout<<val2<<endl;
    }
};
void swap(c1 &oc1,c2 &oc2){
    int temp= oc1.val1;
    oc1.val1=oc2.val2;
    oc2.val2=temp;
}

int main(){
    c1 oc1;
    oc1.setdata(29);
    c2 oc2;
    oc2.setdata(393);
    swap(oc1,oc2);
    cout<<"the exchange value of c1 after exchanging is ";
    oc1.display();
    cout<<"the exchange value of c2 after exchanging is ";
    oc2.display();

    

    return 0;
}