#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,x,k,l,c=0;
    cin>>s>>t>>x;
    if((s>=13 && s>=24)&& (t>=0 && t<=12)){
        k=s-12;
    }
    else if((t>=13 && t>=24)&& (s>=0 && s<=12)){
        l=t-12;
    }
if((x>=k && x<=t) || (x>=s && x<=l) ||(t>k || x>l)){c=1;}
else if(k>t && x<t){c=0;}
 else if(c==1)cout<<"Yes";
 else cout<<"no";
}
