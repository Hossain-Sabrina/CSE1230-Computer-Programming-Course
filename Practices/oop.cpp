#include<iostream>
using namespace std;
class building
{
public:
    int floor, room, area;
    void get(){
    cout<<"Enter Floor, Room ,area : ";
    cin>>floor>>room>>area;
    }
    void show(){
    cout<<"Floor: "<<floor<<endl;
    cout<<"Room: "<<room<<endl;
    cout<<"Area: "<<area<<endl;
    }
};
class house:public building{
public:
    int bedroom, bathroom;
    void get1()
    {
    cout<<"Enter Bedroom, Bathroom: ";
    cin>>"Bathroom: "};
