//File I/O in C++: Read/Write in the Same Program & Closing Files
#include<iostream>
#include<fstream>
 
using namespace std;
 
int main(){
    //connecting our file with hout stream
    // ofstream hout("sample.txt");

    // //creating a name string variable and filling it with string entered by user 
    // string name;
    // cout<<"enter your name";
    // cin>>name;
     
    //  // file ke andar output karta hai or writing a string to the file 
    //  hout<<name + " is my name";

    //  //disconnecting our file
    //  hout.close();


     //connecting our file with hin stream
     ifstream hin("sample.txt");

     //creating a content string variable and filling it with string present there in the text file
     string content;
     getline(hin,content);//content ke andar file ka pahle pura line aa jao
    //  hin>>content;//content ke andar file ka pahla word aa jao
     cout<<"the content of the file is: "<<content;//using cout kyo ki program ke terminal me print kara rahe hai

     //disconnecting our file
     hin.close();

return 0;
}
