#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100050],b[100050],n,q,i,j,l,r,sum=0,add=0;
cin>>n>>q;
for(i=1,j=1;i<=n;i++,j++){
    cin>>a[i];
    add=add+a[i];
    b[j]=add;
}
for(j=1,b[0]=0;j<=q;j++){
    cin>>l>>r;
    sum=b[r]-b[l-1];
    cout<<sum<<endl;
}
}
