#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,temp,a[10005];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int max=a[0],min=a[0],x=0,y=0;
    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            x=i;
        }
        if(a[i]<min)
        {
            min=a[i];
            y=i;
        }
    }
    temp=a[x];
    a[x]=a[y];
    a[y]=temp;
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
}
