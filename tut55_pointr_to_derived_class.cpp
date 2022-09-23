#include<iostream>
using namespace std ;
class baseClass{
    public:
    int var_base;
    void display(){
        cout<<"displaying base class varible var_base "<<var_base<<endl;

    }
};
class derivedClass:public baseClass{
    public:
    int var_derived;
    void display(){
        cout<<"displaying base class variable var_base "<<var_base<<endl;
        cout<<"displaying derived class variable var_derived "<<var_derived<<endl;

    }

};

int main(){
    baseClass obj_base;
    baseClass *base_class_pointer;
    derivedClass obj_derived;

    // base_class_pointer = &obj_derived;//show no error despite containing address of two object.
    // base_class_pointer->var_base=79;
    // base_class_pointer->display();// ye 'baseclass' ke display function ko execute karega kyoki ye 'baseClass' ka pointer hai na ki 'derivedClass' ka.
    derivedClass *derived_class_pointer;
    derived_class_pointer=&obj_derived;
    derived_class_pointer->var_base=2948;
    //derived class ke pointer se derived class ke hi variable ko point kar sakte hai
    //inherited varaible ko target karne ke liye bhi derived class ka hi pointer chahiye.
    //as shown above
    derived_class_pointer->var_derived=8373;
    derived_class_pointer->display();
      .
return 0;
}