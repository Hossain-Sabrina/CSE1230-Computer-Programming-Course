#include<iostream>
using namespace std;
class dist
{
public:
    double distance=120.00;
    virtual void trav_time()
   {
    cout<<"travel time(in miles) : "<<distance/60<<"hours";
    cout<<endl;
   }

};
class metric:public dist
{
    void trav_time()
    {
    cout<<"travel time(in kilometers) : "<<distance/100<<"hours"<<endl;
    }
};
int main()
{
   dist *x,distance;
   x=&distance;
   x->trav_time();
   metric k;
   x=&k;
   x->trav_time();
}
