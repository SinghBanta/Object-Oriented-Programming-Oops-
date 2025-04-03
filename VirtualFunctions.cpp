#include <iostream>
#include <string>
using namespace std;

//Runtime Polymorphism using virtual function.
class Parent{
    public:
    void show(){
        cout<<"Hi i am parent class function."<<endl;
    }

    virtual void getInfo(){
        cout<<"Hello from parent"<<endl;
    };



};

class Child:public Parent{
    public:
    void show(){
        cout<<"Hi I am child class function"<<endl;
    }

    void getInfo(){
        cout<<"Hello from child"<<endl;
    }
};

int main(){
    Child c1;
    c1.show();

}