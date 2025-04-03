#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name;
    int age;

};

class Student:public Person{
    public:
    int rollno;

};

class GradStudent:public Student {
    public:
    string researchArea;

};

int main(){
    GradStudent s1;
    s1.name="Banta Singh";
    s1.rollno=2127959;
    s1.researchArea="Quantam Physics";

    cout<<"name :"<<s1.name<<endl;
    cout<<"rollno :"<<s1.rollno<<endl;
    cout<<"researchArea :"<<s1.researchArea<<endl;
    return 0;
}