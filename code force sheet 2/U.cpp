#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,a,b,i,sum,c=0,t,r;
    cin>>N;
    cin>>a>>b;
    for(i=1; i<=N; i++)
    {
        sum=0;
        t=i;
        while(t!=0)
        {
            r=t%10;
            sum+=r;
            t/=10;
        }
        if(sum>=a && sum<=b)
        {
            c+=i;
        }
    }
    cout<<c<<" ";
}
