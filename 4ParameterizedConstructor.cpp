#include <iostream>
#include <string>
using namespace std;




//Example of Parameterized Constructor.


class Teacher{

    public://always declare constructor public
    // Teacher(){
    //     cout<<"I have made this constructor not default"<<endl;
    // }

    Teacher(string n, string d, string s, double sal){
        name=n;
        dept=d;
        subject=s;
        salary=sal;
    }

    public:
    //properties or attributes
    string name;
    string dept;
    string subject;
    double salary;


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