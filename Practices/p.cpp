#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n, a[205],i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int x,y=1000000000;
    for(i=0; i<n; i++)
    {
        x=0;
        while(a[i]%2==0)
        {
            x++;
            a[i]/=2;
        }
        y=min(x,y);
    }
    cout<<y<<endl;
    return 0;
}
