#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a1[10005],a2[10005],i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a1[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>a2[i];
    } int sum1=0, sum2=0;
    for(int i=0;i<n;i++){
        sum1+=a1[i];
        sum2+=a2[i];
    }
if(sum1==sum2){cout<<"yes"<<endl;}
else{cout<<"no"<<endl;}
}
