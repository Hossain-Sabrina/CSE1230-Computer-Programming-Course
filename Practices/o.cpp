#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,i;
    cin>>n;
    long long int f[55];
    for(i=1; i<=50; i++)
    {
        f[1]=0;
        f[2]=1;
        f[i]=f[i-1]+f[i-2];
    }
    cout<<f[n]<<endl;
    return 0;
}
