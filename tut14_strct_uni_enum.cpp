#include<iostream>
using namespace std;

                               /****** STRUCTURES ******/
//  typedef struct employee{
//     int eid ;
//     char favchar;
//     float salary;
// } ep;
// note--> ep == struct employee

                                /***** UNION ******/
union  money{
    int rice;
    char car;
    float pound;
};
int main(){
    enum meals{breakfast,lunch,dinner};
      meals e1=dinner;
      cout<<e1<<endl;
                            /***** UNION ******/
    // union money m1;
    // m1.rice=67;
    // m1.car='c';
    // cout<<m1.rice;
    // since I allocated the whole memory block to car and I am asking value of rice
    // that is why It is giving garabage value

                             /****** STRUCTURES *******/
    // ep sauby;
    // struct employee siroj;
    // struct employee sindhu;
    // sauby.eid=1;
    // sauby.favchar='d';
    // sauby.salary=199999;
    // cout<<"The id  is "<<sauby.eid<<endl;
    // cout<<"The favchar is "<<sauby.favchar<<endl;
    // cout<<"The salary is "<<sauby.salary<<endl;
    return 0;
}