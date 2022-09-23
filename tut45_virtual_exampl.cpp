#include<iostream>
using namespace std ;
class student{
    float roll_number;
    public:
    void set_number(int a){
        roll_number=a;
   }
   void print_number(void){
    cout<<"the roll number is "<<roll_number<<endl;
   }
};
class test :virtual public student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
    void print_marks(void){
        cout<<"you result is here :"<<endl
        <<"maths:"<<maths<<endl
        <<"physics"<<physics<<endl;
    }
};
class sports:virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score=sc;
    }
    void print_score(void){
        cout<<"your pt score is:"<<score<<endl;
    }
};
class result:virtual public test,virtual public sports{
    private :
    float total;
    public:
    void display(void){
        total=maths+physics+score;
        print_number();
        print_marks();
        print_score();
        cout<<"your total score is "<<total<<endl;
    }
};

int main(){
    result saurabh;
    saurabh.set_number(3482);
    saurabh.set_marks(34.4,23.4);
    saurabh.set_score(9);
    saurabh.display();
      
return 0;
}