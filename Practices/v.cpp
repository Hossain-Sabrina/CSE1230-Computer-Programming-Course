#include<bits/stdc++.h>
using namespace std;
int main()
{int n,m;
cin>>m>>n;
int s,a[100005];
for(int i=1; i<=n; i++)
{
    a[i]=0;
}
for(int i=1;i<=m;i++){
    cin>>s;
    a[s]++;
}
for(int i=1;i<=n;i++){
    cout<<a[i]<<endl;
}
}
