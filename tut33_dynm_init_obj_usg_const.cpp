#include<iostream>
using namespace std;
class bankdeposit{
    int principal;
    int years;
    float simpleintrst;
    float returnvalue;
    public:
    bankdeposit(){}//default constructor to remove error
    bankdeposit(int p,int y,float r);
    bankdeposit(int p,int y,int r);
    void show();
        

    
};
bankdeposit::bankdeposit(int p,int y,float r){
    principal=p;
    years=y;
    simpleintrst=r;
    returnvalue=principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue=returnvalue*(r+1);
    }
    

}
bankdeposit::bankdeposit(int p,int y,int r){
    principal=p;
    years=y;
    simpleintrst=float(r)/100;
    returnvalue=principal;
    for(int i;i<y;i++){
        returnvalue=returnvalue*(simpleintrst+1);
    }
    

}
void bankdeposit::show(){
cout<<"the money received after "<<years<<" years "<<" will be "<<returnvalue<<endl;
}

int main(){
    bankdeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"enter the value of p,y,r"<<endl;
    cin>>p>>y>>r;
    bd1=bankdeposit(p,y,r); //way to call constructor in a class
    bd1.show();

    cout<<"enter the value of p,y,R"<<endl;
    cin>>p>>y>>R;
    bd1=bankdeposit(p,y,R);//way to call constructor in a class
    bd1.show();

    return 0;
}