#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int a=100;
    cout.setf(ios::dec);
    cout<< a <<endl;
    cout.unsetf(ios::dec);
    cout.setf(ios::hex);
    cout<< a <<endl;
    cout.unsetf(ios::hex);
    cout.setf(ios::oct);
    cout<< a <<endl;
}
