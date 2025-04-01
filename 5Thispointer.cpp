#include <iostream>
#include <string>
using namespace std;


// This pointer is a special pointer that is used to refer to the current object of the class.


class Teacher{


    public:
    //properties or attributes
    string name;
    string dept;
    string subject;
    double salary;

    Teacher(string name, string dept, string subject, double salary){
        this->name=name;//here this->name is object name and name is parameter of constructor.
        //this->name is used to refer to the current object of the class. It is used to access the data members and member functions of the class.
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }


    void getInfo(){
        cout<<"name :"<< name<<endl;
        cout<<"subject :"<< subject<<endl;
    }

};


int main(){

    Teacher t1("Banta Singh","Computer Science","C++",25000);
    

   t1.getInfo(); 
   return 0;
}