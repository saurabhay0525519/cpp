#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int priceitem[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};
void shop::setprice(void)
{
    cout << "Enter the " << counter + 1 << " itemid " << endl;
    cin >> itemid[counter];
    cout << "Enter the priceitem " << endl;
    cin >> priceitem[counter];
    counter++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "item of id " << itemid[i] << " has price " << priceitem[i] << endl;
    }
}
int main()
{
    shop b;
    b.initcounter();
    b.setprice();
    b.setprice();
    b.setprice();
    b.displayprice();
    return 0;
}