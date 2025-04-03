// #include <iostream>
// #include <string>
// using namespace std;


// // Copy constructor is a special constructor that initializes an object using another object of the same class and copy the values of the data members of the object to the new object. It is used to create a new object as a copy of an existing object. It is called when an object is passed by value to a function or when an object is returned from a function. It is also called when an object is initialized with another object of the same class.


// class Teacher{


//     public:
//     //properties or attributes
//     string name;
//     string dept;
//     string subject;
//     double salary;

//     Teacher(string name, string dept, string subject, double salary){
//         this->name=name;//here this->name is object name and name is parameter of constructor.
//         //this->name is used to refer to the current object of the class. It is used to access the data members and member functions of the class.
//         this->dept=dept;
//         this->subject=subject;
//         this->salary=salary;
//     }


//     void getInfo(){
//         cout<<"name :"<< name<<endl;
//         cout<<"subject :"<< subject<<endl;
//     }

// };


// int main(){

//    Teacher t1("Banta Singh","Computer Science","C++",25000);
//    Teacher t2=t1;//default copy constructor is called here.
//    t2.getInfo();
//    return 0;
// }




//Example with our own custom copy constructor.

#include <iostream>
#include <string>
using namespace std;

class Teacher{

    public:
    //properties or attributes
    string name;
    string dept;
    string subject;
    double salary;
    
    //parameterized constructor
    Teacher(string name, string dept, string subject, double salary){
        this->name=name;//here this->name is object name and name is parameter of constructor.
        //this->name is used to refer to the current object of the class. It is used to access the data members and member functions of the class.
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }


    //Copy constructor
    Teacher(Teacher &orgObj){
        cout<<"I am custom copy constructor." << endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }


    void getInfo(){
        cout<<"name :"<< name<<endl;
        cout<<"subject :"<< subject<<endl;
    }

};


int main(){

   Teacher t1("Banta Singh","Computer Science","C++",25000);
   Teacher t2=t1;//custom copy constructor is called here.
   t2.getInfo();
   return 0;
}