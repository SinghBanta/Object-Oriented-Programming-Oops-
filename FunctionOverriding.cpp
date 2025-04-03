#include <iostream>
#include <string>
using namespace std;

//Function Overriding example of runtime polymorphhism.
class Parent{
    public:
    void show(){
        cout<<"Hi i am parent class function."<<endl;
    }



};

class Child:public Parent{
    public:
    void show(){
        cout<<"Hi I am child class function"<<endl;
    }
};

int main(){
    Parent p1;
    p1.show();

}