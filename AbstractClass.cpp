#include <iostream>
#include <string>
using namespace std;

//Abstract class is used to give an idea, objects are not made using abstract class.
class Shape{//abstract class
    virtual void draw()=0;//pure virtual function

};

class Circle:public Shape{
    public:
    void draw(){
        cout<<"drawing a circle"<<endl;
    }
};

int main(){
    Circle c1;
    c1.draw();
}