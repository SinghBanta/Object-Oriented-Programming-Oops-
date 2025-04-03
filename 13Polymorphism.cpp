#include <iostream>
#include <string>
using namespace std;

//Constructor Overloading is example of compile time Polymorphism.
//Polymorphism is of two types compile time and runtime
class Person{

    public:
    string name;
    int age;

    Person(){
        cout<<"Hi I am non parameterized constructor"<<endl;
    };

    Person(string name,int age){
        this->name=name;
        this->age=age;
        cout<<"Hi I am Parameterized constructor"<<endl;
    };

    void getInfo(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
    };

};


int main(){

    Person p1("Banta Singh",23);
    p1.getInfo();

    return 0;

}

