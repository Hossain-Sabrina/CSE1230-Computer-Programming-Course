#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int M,N,i,sum=0;
    while(1)
    {
        cin>>M>>N;
        if((N<=0 || M<=0)==0)
        {
            sum=0;
            int maxx = max(N,M);
            int minn = min(N,M);
            for(i=minn; i<=maxx; i++)
            {
                sum=sum+i;
                cout<<i<<" ";
            }
            cout<<"sum ="<<sum<<endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}
