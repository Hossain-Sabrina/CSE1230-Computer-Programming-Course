#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, r,flag=0;
    cin>>n>>r;
    if(n%r==0)
    {
        flag=1;
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
