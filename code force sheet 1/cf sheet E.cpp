#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double R,C,A;
    C=3.141592653;

    cin>>R;
    cout<< fixed << setprecision(9);
    A=C*R*R;
    cout<<""<<A<<endl;
    return 0;
}
