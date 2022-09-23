// File I/O in C++: open() and eof() functions
#include<iostream>
#include<fstream>
#include<string>
using namespace std ;

int main(){
    //declaring the object of ofstream class
    // ofstream out;
    // //linking out object to the file/*  */
    // out.open("sample.text");
    // //writing in the file
    // out<<"saurabh work hard to get selected in Faang company\n";
    // out<<"saurabh give your 100% to get selected in Faang company";
    // out.close();

    ifstream in;
    string st;
    in.open("sample.text");
    // in>>st;
    while(in.eof()==0){//pura file read karo
        getline(in,st);
        cout<<st;
    }
    in.close();
    

      
return 0;
}