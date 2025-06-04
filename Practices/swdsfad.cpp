#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x;
    cout.precision(5);
    cout.self(ios::right);
    cout<<"log    log10(x)"<<endl;
    for(x=2; x<=100; x++)
    {
    cout.width(10);
    cout<<log(x)<<"  ";
    cout.width(10);
    cout<<log10(x)<<endl;
    }
}
