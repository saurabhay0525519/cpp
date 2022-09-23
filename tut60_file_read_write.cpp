// File I/O in C++: Reading and Writing Files
#include<iostream>
#include<fstream>
/*
the useful classes for working with file are:
1.fstreambase
2.ifstream -->derived from fstreambase
3.ofstream -->derived from fstreambase

in order to work with file in C++, you will have to open it.primarily there are two way
to open it:
1.using the constructor
2.using the member function open() of the class

*/
using namespace std ;

int main(){
    // string st="saurabh yadav";
    // //opening files using constructor and writing it.
    // ofstream out("sample.txt");//write operation
    // //'out' ofstream class ke object ka naam hai
    // out<<st;
     
    //  opening file using constructor and reading it.
     string st2;
     ifstream in("sample2.txt");//read operation
     in>>st2;
     getline(in,st2);
     cout<<st2;
      
return 0;
}