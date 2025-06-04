#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin>>x;
    if(00<=x && x<=25.0){cout<<"Interval [0,25]";}
    else if(25.0<x && x<=50.0){cout<<"Interval (25,50]";}
    else if(50.0<x && x<=75.0){cout<<"Interval (50,75]";}
    else if(75.0<x && x<=100.0){cout<<"Interval (75,100]";}
    else {cout<<"Out of Intervals";}
    return 0;
}
