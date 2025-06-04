#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
 int i,j,n,max=-100000;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 {
     cin>>a[i];
 }
 for(i=0;i<n;i++)
 {
     max=-100000;
     for(j=i;j<n;j++)
     {
         if(max<a[j])
         {
             max=a[j];
         }
         cout<<max<<" ";
     }
 }
 cout<<endl;
    }
 return 0;
}
