#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],n,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]<0)
        {
            a[i]=2;
        }
        else if(a[i]>0)
        {
            a[i]=1;
        }
        else if(a[i]==0)
        {
            a[i]==0;
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
