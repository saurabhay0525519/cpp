// Function objects(functor) in C++
#include <iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
    // Function Objects (Functor) : A function wrapped in a class
     //  so that it is available like an object
    int arr[] = {1, 73, 4, 2, 54, 7};
    sort( arr, arr+6, greater< int >( ));//descending order me karega
    // sort(arr,arr+5);//0 se lekar 5-0 tak sort karega elements ko
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
//THAT'S THE END OF C++ PROGRAMING BASIC.