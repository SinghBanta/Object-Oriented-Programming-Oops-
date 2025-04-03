#include <iostream>
#include <string>
using namespace std;


//Constructor is of three types:
//1.Non-parameterized
//2.Parameterized
//3.Copy Constructor

//Example of Non-parameterized Constructor.
class Teacher{

    public://always declare constructor public
    // Teacher(){
    //     cout<<"I have made this constructor not default"<<endl;
    // }

    Teacher(){
        dept="Computer Science";//This is used to initialize the dept variable with default value.Even if i initialize here no need to initialize in main function.
    }

    public:
    //properties or attributes
    string name;
    string dept;
    string subject;
    double salary;

};


int main(){

    Teacher t1;
    t1.name="Banta Singh";
    t1.subject="Physics";
    // t1.dept="Computer Science";//if we not initialized it in constructor then we have to initialize it here.
    t1.salary=25000;
    

    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.salary<<endl;

    return 0;
}