#include <iostream>
#include <string>
using namespace std;


//There is a problem when we shallow copy the object.That when we dynamically allocate memory two objects can point to the same address.Hence We use deep copy.
//And shallow copy is the default copy constructor which is provided by the compiler.
//In shallow copy we just copy the address of the old object to the new object.


class Student{
    public:
    string name;
    double *cgpaPtr;//Till now don't point out any address to this pointer.

    Student(string name,double cgpa){
        this->name=name;
        cgpaPtr=new double;//dynamic memory allocation
        *cgpaPtr=cgpa;//dereferencing the pointer to assign value
        
    };

    Student(Student &obj){
        this->name=obj.name;
        this->cgpaPtr=obj.cgpaPtr;
    }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPtr<<endl;
    }

};


int main(){

    Student s1("Banta Singh",8.9);
    Student s2(s1);
    s1.getInfo();

    *(s2.cgpaPtr)=9.0;//changing the value of cgpa of s2
    s1.getInfo();
    return 0;
}


//Example with deep copy constructor.
//We use deep copy when we dynamically allocate memory to the object.
//In deep copy we create a new memory location for the new object and copy the value of the old object to the new object.


#include <iostream>
#include <string>
using namespace std;



class Student{
    public:
    string name;
    double *cgpaPtr;//Till now don't point out any address to this pointer.

    //parameterized default constructor
    Student(string name,double cgpa){
        this->name=name;
        cgpaPtr=new double;//dynamic memory allocation
        *cgpaPtr=cgpa;//dereferencing the pointer to assign value
        
    };

    //custom copy constructor
    Student(Student &obj){
        this->name=obj.name;
        cgpaPtr=new double;//dynamic memory allocation
        *cgpaPtr=*obj.cgpaPtr;//deep copy means we create a new memory location for the new object and copy the value of the old object to the new object.
    }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPtr<<endl;
    }


};

int main(){

    Student s1("Banta Singh",8.9);
    Student s2(s1);
    s1.getInfo();

    *(s2.cgpaPtr)=9.2;//changing the value of cgpa of s2
    s1.getInfo();

    s2.name="Aman Kumar";
    s2.getInfo();
    return 0;
    
}


