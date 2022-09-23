#include<iostream>
using namespace std ;

class shopitem{
    int id;
    float price;
    public:
    void setdata(int a,float b){
        id=a;
        price=b;
    }
    void getdata(void){
        cout<<"the id of item is "<<id<<endl;
        cout<<"the price of item is "<<price<<endl;
    }
};

int main(){
    int size=3;
    shopitem *ptr = new shopitem[size];
    shopitem *ptrtemp = ptr;
    int i,p;
    float q;
    for(i=0;i<size;i++){
        cout<<"enter the id and price of "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
        // cout<<"the id and price of item is "<<endl;
    }
    for(i=0;i<size;i++){
        cout<<"the id and price of item of "<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
        cout<<endl;
    }
      
return 0;
}