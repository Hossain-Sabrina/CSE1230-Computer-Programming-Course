#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,j,a=1;
    cin>>N;
    for(i=1; i<=N; i++)
    {
        for(j=a; j<=(a+2); j++)
        {
            cout<<j<<" ";
        }
        cout<<"PUM"<<endl;
        a=a+4;
    }
    return 0;
}
