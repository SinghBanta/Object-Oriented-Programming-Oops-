#include <iostream>
#include <string>
using namespace std;


class IPL{
    public:
    string captain;
    string venues;

};

class RCB:public IPL{
    public:
    string topRunScorer;
    string topWicketTaker;

};

class Punjab:public IPL{
    public:
    int trophies; 
};

int main(){

    Punjab p1;
    p1.trophies=0;
    p1.captain="Shreyas Iyer";
    RCB r1;
    r1.topRunScorer="Virat Kohli";
    r1.venues="Mulanpur Stadium";


    cout<<"Trophies of Punjab :"<<p1.trophies<<endl;
    cout<<"Captain Of Punjab Kings :"<<p1.captain<<endl;
    cout<<"Top run scorer for RCB :"<<r1.topRunScorer<<endl;
    cout<<"Venue for Punjab :"<<r1.venues<<endl;

}