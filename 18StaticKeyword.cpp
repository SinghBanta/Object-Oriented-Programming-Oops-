#include <iostream>
#include <string>
using namespace std;


void show (){
    static int x=0;//Static Keyword is used to declare static variable.It is used to preserve the value of variable even after the function is executed.
    cout<<"x :"<<x<<endl;
    x++;
}
int main(){
    show();
    show();
    show();
    return 0;

}


//Example another usage of static keyword.

#include <iostream>
#include <string>   
using namespace std;


class ABC{
    public:
    ABC(){
        cout<<"Constructor called"<<endl;
    }

    ~ABC(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    if(true){
        static ABC obj;//Static object is created in the static memory area and it is destroyed when the program ends.
        cout<<"end of function call"<<endl;
    }

}