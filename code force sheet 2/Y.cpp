#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,i,n,c;
cin>>n;
i=1;
a=0;
b=1;
for(i;i<=n;i++){
    cout<<a<<" ";
    c=a+b;
    a=b;
    b=c;
}
return 0;
}
