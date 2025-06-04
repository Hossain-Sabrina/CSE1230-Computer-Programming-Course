#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[10005],i;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    int min=a[0],count=0;
    for(i=0; i<n; i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    for(i=0; i<n; i++)
    {
        if(min==a[i])
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<"Unlucky"<<endl;
    }
    else
    {
        cout<<"Lucky"<<endl;
    }
}
