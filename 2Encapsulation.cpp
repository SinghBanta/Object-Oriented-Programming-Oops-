#include <iostream>
#include <string>
using namespace std;

//Encapsulation is wrapping up data and memner functions or methods into a single unit called class. It is used to restrict access to the data members and member functions of the class.


class car{
    private:
    string color;
    string model;
    int year;
    double price;

    public:
    //setter
    void setColor(string c){
        color = c;
    }
    void setModel(string m){
        model = m;
    }
    void setYear(int y){
        year = y;
    }
    void setPrice(double p){
        price = p;
    }

    //getter
    string getColor(){
        return color;
    }
    string getModel(){
        return model;
    }
    int getYear(){
        return year;
    }
    double getPrice(){
        return price;
    }
    
};
int main(){
    car c1;
    c1.setColor("Red");
    c1.setModel("BMW");
    c1.setYear(2023);
    c1.setPrice(5000000);

    cout<<"Car color: "<<c1.getColor()<<endl;
    cout<<"Car model: "<<c1.getModel()<<endl;
    cout<<"Car year: "<<c1.getYear()<<endl;
    cout<<"Car price: "<<c1.getPrice()<<endl;

    return 0;

}