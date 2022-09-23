#include<iostream>
using namespace std ;
#include<fstream>

int main(){
    // ofstream sin("sample1.txt");
    // string sample;
    // cout<<"enter the string";
    // cin>>sample;
    // sin<<sample;

    ifstream sout("sample1.txt");
    string sample;
    // getline(sout,sample);
    sout>>sample;//data transfer arrow ke direction me hoga
    cout<<sample;
      
return 0;
}