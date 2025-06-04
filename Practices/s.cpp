#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,f=0;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>k;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]==k)
            {
                f=1;
            }
        }
    }
    if(f==1)
    {
        cout<<"will not take number";
    }
    else
    {
        cout<<"will take number";
    }
}
