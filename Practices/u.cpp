#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,j,m, n,a[100005],b[100005],c=0;
cin>>n>>m;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<m; i++)
    {
        cin>>b[i];
    }
    for(i=0,j=0; i<n; i++)
    {
        if(b[j]==a[i])
        {
            c++;
            j++;
        }
    }
    if(c==m)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;

}
