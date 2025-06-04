#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    char a[m][n];
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];

    int x,y;
    cin>>x>>y;
    x--,y--;
    if(a[x][y+1]=='x'&& a[x][abs(y-1)]=='x' && a[x+1][y]=='x' && a[abs(x-1)][y]=='x' && a[x+1][y+1]=='x'
            && a[abs(x-1)][y+1]=='x' && a[x+1][abs(y-1)]=='x'&& a[abs(x-1)][abs(y-1)]=='x')
            cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
}
