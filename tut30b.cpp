#include<iostream>
using namespace std;
class point
{
    int a,b;
    public:
    point(int x ,int y)
    {
        a=x;
        b=y;
    }
    void displaypoint()
    {
        cout<<"the point are "<<"("<<a<<","<<b<<")"<<endl;
    }
};

int main()
{
    point c(9,8);
    c.displaypoint();

    return 0;
}