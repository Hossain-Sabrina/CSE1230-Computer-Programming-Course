#include<bits/stdc++.h>
using namespace std;
int main(){
long long a,b,x;
cin>>a>>b>>x;
if(a>b)
    swap(a,b);
    long long c=a/x, d=b/x;
    long long ans=c-d, res=0;
    if(a%x==0)
        ans++;
    if(ans){
        long long y= c*(c+1)/2,z=d*(d+1)/2;
        res=z-y;
        res*=x;
        if(a%x==0)
            res+=a;
    }
    cout<<res<<endl;
    }

