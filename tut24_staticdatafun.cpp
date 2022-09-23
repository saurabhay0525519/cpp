#include <iostream>
using namespace std;
class employee
{

    int id;
    
     static int count ;

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {

        cout << "the id of these employee " << id << " the employee number is " << count << endl;
    }
    static void getcount(void){
        cout<<"the value of count is "<<count<<endl;
    }
};

 int employee::count;//default value 0

int main()
{
    employee stat;
    stat.setdata();
    stat.getdata();
    employee::getcount();

    stat.setdata();
    stat.getdata();
    employee::getcount();

    stat.setdata();
    stat.getdata();
    employee::getcount();
}