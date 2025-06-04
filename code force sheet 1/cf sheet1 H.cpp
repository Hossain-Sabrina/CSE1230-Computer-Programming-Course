#include<iostream>
using namespace std;
int main()
{
    float A,B,c;
    int C;
    cin>>A>>B;
    C=A/B;
    c=A/B;
    cout<<"floor "<<A<<" / "<< B<<" = "<<C<<endl;
    if(C==c)
        cout<<"ceil "<<A<<" / "<< B<<" = "<<C<<endl;
    else
    cout<<"ceil "<<A<<" / "<< B<<" = "<<C+1<<endl;
    if(.5<=c-C>=.9)
    {
        cout<<"round "<<A<<" / "<< B<<" = "<<C+1<<endl;
    }
    else
    {
        cout<<"round "<<A<<" / "<< B<<" = "<<C<<endl;
    }
    return 0;
}
