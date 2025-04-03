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