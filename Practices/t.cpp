#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0,l=0,i,j ,sum=0;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        cin>>a[i][j];
        for(i=0;i<n;i++)
            k=k+a[i][i];
        for(i=0;i<n;i++)
        l=l+a[i][n-1-i];
        sum=abs(k-l);
        cout<<sum<<endl;
    return 0;
}
