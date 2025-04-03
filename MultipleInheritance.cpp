#include <iostream>
#include <string>
using namespace std;


class Mahindra{//Parent Class
    public:
    string car;
    int sale;

};

class Tata{//Parent Class
    public:
    float profit;
};


class Company:public Mahindra, public Tata{//Children Class
    public:
    int carProduction;

    void getInfo(){
        cout<<"car :"<<car<<endl;
        cout<<"sale :"<<sale<<endl;
        cout<<"profit :"<<profit<<endl;
    }

};

int main(){

    Company c1;
    c1.car="Thar";
    c1.profit=200000;
    c1.sale=1500000;
    c1.getInfo();
}