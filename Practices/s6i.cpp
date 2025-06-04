#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,x,c=0,d=0 ,sum,ans;
    cin>>a>>b>>x;
    if(a>b)
    swap(a,b);
    c=a/x;
    d=b/x;
    sum=c-d;
    if(sum){
        long long int y=c*(c+1)/2, z=d*(d+1)/2;
        ans=z-y;
        ans*=x;
        if(a%x==0)
            ans+=a;
    }
    cout<<ans<<endl;
}
