#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  n,i,p;
    cin>>n;
    long long int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>p;
    for(i=0; i<n; i++)
    {if(a[i]==p)
    {p=i;
     cout<<p;
    break;}}
    if(i==n){
        cout<<"-1";
    }
   return 0;
}
