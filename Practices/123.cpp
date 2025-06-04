#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    double a;
    cout.precision(5);
    cout.setf(ios::right);
    cout<<"log    log10(a)"<<endl;
    for(a=2; a<=100; a++)
    {
    cout.width(10);
    cout<<log(a)<<"  ";
    cout.width(10);
    cout<<log10(a)<<endl;
    }
}
