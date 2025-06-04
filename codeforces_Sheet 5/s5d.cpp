#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int prime(int p);
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(prime(n)){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
}
int prime(int p){
int f=1;
if(p==0 || p==1){f=0;}
else {
    for(int i=2; i<=sqrt(p);i++){
        if(p%i==0){
            f=0;
            break;
        }
    }
}
return f;
}
