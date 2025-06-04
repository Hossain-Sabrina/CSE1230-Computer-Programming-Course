#include<bits/stdc++.h>
#define ll long long
const ll N=20000005;
ll cnt[N];
using namespace std;
int main()
{
    ll n, i, f=0;
    cin>>n;
    ll m=n;
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;
                cnt[i]++;
            }
            f++;
        }
    }
    if(n!=1)
    {
        f++;
        cnt[n]++;
    }
    for(i=0; i<N; i++){
        if(cnt[i]>0)
        {
            cout<<"("<<i<<"^"<<cnt[i]<<")";

    if(f>1)
    {
        cout<<"*";
        f--;
    }}}
    cout<<endl;
}

