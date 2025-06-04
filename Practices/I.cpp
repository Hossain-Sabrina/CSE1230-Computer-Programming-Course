#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n,i,j;
    cin>>t;
    for(int k=0; k<t; k++)
    {
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int sum=0,minimum=10000000;
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                sum=a[i]+a[j]+j-i;
                if(sum<=minimum)
                {
                    minimum = sum;
                }
            }
        }
        cout<<minimum<<endl;
    }

}
