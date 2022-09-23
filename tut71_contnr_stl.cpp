// Containers in C++ STL
#include<iostream>
#include<vector>
using namespace std;

template<class T>
void display(vector<T> &v){
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";//v.at()==v[i]
    }
}
int main(){
    
    // vector<int>vec1;//vector is resizeable array
    // vector<char>vec1;//zero length vector
    // vector<char>vec2(4);//4-length character vector
    // vector<char>vec3(vec2);//4-length character vector from vec2
    vector<int>vec4(4,3);//4 bar 3 ko print karna hai
    
    int element;
    int size;
    cout<<"enter the size of vector"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"enter the element to add to this vector"<<endl;
        cin>>element;
        vec4.push_back(element);//add element from back in vector
    }
    display(vec4);
    // printf("\n");
    // vec1.pop_back();//delete element from back in vector
    // vector<int> ::iterator iter=vec1.begin();
    // vec1.insert(iter+2,38);
    // display(vec1);
      
return 0;
}