//List In C++ STL
#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int>::iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    }
}


int main(){
    list<int> list1;//empty list of 0 length
    list1.push_back(7);
    list1.push_back(8);
    list1.push_back(9);
    list1.push_back(6);
    list1.push_back(2);
    list1.push_back(3);
    
    list<int>list2;
    list<int> ::iterator itt;
    itt=list2.begin();//itt pointer ke andar list2 ke phle blck ka addres store karo
    *itt=3;
    itt++;
    *itt=7;
    itt++;
    *itt=3;
    itt++;
    *itt=4;
    display(list2);
    // list<int> ::iterator iter;
    // iter=list1.begin();
    
    display(list1);
    // // list1.pop_back();
    // // list1.pop_front();
    // // list1.remove(9);
    // // list1.sort();
    cout<<endl;
    list1.merge(list2);//list1 me list2 ko merge kar dega
    cout<<endl;
    cout<<"after merging the list"<<endl;
    display(list1);
    
      
return 0;
}