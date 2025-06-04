#include<bits/stdc++.h>
#include<string.h>
#define ll long long
using namespace std;
void solve(){
ll a;
cin>>a;
for(ll i=0; i<a; i++)
    {
        ll n=1;
    for(ll j=0; j<=i;j++){
        cout<<n<<" ";
        n=n*(i-j)/(j+1);}
        cout<<endl;
    }
    }
    int main(){int x=1;
    while(x--){solve();}
    return 0;}


