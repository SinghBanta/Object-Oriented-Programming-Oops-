#include <iostream>
#include <string>
using namespace std;


class Person{
    public:
    string name;
    int age;

    Person(){
        cout<<"Hi I am Base class constructor"<<endl;
    };

    ~Person(){
        cout<<"Hi I am Base class destructor"<<endl;
    };

};

class Student :public Person{
    public:
    int roll;

    Student(){
        cout<<"Hi I am derived class constructor"<<endl;
    };

    ~Student(){
        cout<<"Hi I am derived class destructor"<<endl;
    };

    void getInfo(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"roll :"<<roll<<endl;
    }

};



int main(){

    Student s1;
    s1.name="Banta Singh";
    s1.age=23;
    s1.roll=2127959;

    s1.getInfo();


}


//Example using custom constructor

#include <iostream>
#include <string>
using namespace std;


class Person{
    public:
    string name;
    int age;

    Person(string name,int age){
        this->name=name;
        this->age=age;

    }

};

class Student :public Person{
    public:
    int roll;

    Student(string name,int age, int roll):Person( name, age){
        this->roll=roll;
    }

    void getInfo(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"roll :"<<roll<<endl;
    }

};



int main(){

    Student s1("Banta Singh",21,2127959);

    s1.getInfo();


}