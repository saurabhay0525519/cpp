//Maps in C++ STL
#include<iostream>
#include<map>
// #include<string>
using namespace std;

int main(){
      map<string,int> mapmark;
      mapmark["saurabh"]=23;
      mapmark["manish"]=87;
      mapmark["manoj"]=94;

      map<string,int> ::iterator iter;
       mapmark.insert( { {"Rohan", 89}, {"Akshat", 46} } );//front se add hoga
      for(iter=mapmark.begin();iter!=mapmark.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
      }

return 0;
}