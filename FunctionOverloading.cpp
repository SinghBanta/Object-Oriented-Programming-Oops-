#include <iostream>
#include <string>
using namespace std;


//Function Overloading an example of function overloading.
class Print{
    public:

    void show(int x){
        cout<<"int :"<<x<<endl;
    }

    void show(char ch){
        cout<<"char :"<<ch<<endl;
    }

};

int main(){
    Print p1;
    p1.show('a');

}