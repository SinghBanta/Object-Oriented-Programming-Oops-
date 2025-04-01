#include <iostream>
#include <string>
using namespace std;


//Class is a blueprint of an object. It is a user-defined data type. It is a collection of data members and member functions. It is used to represent real-world entities.
//Object is an instance of a class. It is a variable of the class type. It is used to access the data members and member functions of the class.
//Data members are the variables that are defined inside the class. They are used to store the data of the object. They can be of any data type.

//Real world example is that there is company Mahindra they make bluerint of a car and then they make the car using that blueprint. So, the blueprint is class and the car is object.
//So,not need to make the blueprint again and again. We can use the same blueprint to make different cars. So, we can use the same class to create different objects.


class Teacher{

    private:
    double salary;

    public:
    //properties or attributes
    string name;
    string dept;
    string subject;

    //methods or member function
    void changeDept(string newDept){
        dept = newDept;
    }

    //setter-use to set private values
    void setSalary(double s){
        salary = s;
    }

    //getter-use to get private values
    double getSalary(){
        return salary;
    }
};;


int main(){

    Teacher t1;
    t1.name="Banta Singh";
    t1.subject="Physics";
    t1.dept="Computer Science";
    // t1.salary=25000;//not working now because we have use private access modifier.
    t1.setSalary(25000);

    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;

    return 0;
}