#include <iostream>
#include <string>
using namespace std;

//If we don't make destructor ,it will call automatically when object is destroyed or goes out of scope.

class Student{
    public:
    string name;
    double cgpa;

    // Parameterized constructor
    Student(string n, double c){
        this->name=name;
        this->cgpa=cgpa;
    }


    //Destructor
   ~Student(){
        cout<<"Hi, I delete everything";
    };

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<cgpa<<endl;
    }

};


int main(){

   Student s1("Banta Singh",8.9);
   s1.getInfo();
    return 0;
}