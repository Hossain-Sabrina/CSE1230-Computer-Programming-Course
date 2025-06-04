#include<bits/stdc++.h>
using namespace std;
int main()
{int m,n,i,j;
cin>>m>>n;
int a[m][n];
for(i=0; i<m; i++)
    for(j=0; j<n; j++)
    cin>>a[i][j];
for(i=0;i<m;i++)
{
    for( j=n-1;j>=0;j--){
        for( j=n-1;j>=0;j--)
            cout<<a[i][j]<<" ";
    }cout<<endl;
}}
