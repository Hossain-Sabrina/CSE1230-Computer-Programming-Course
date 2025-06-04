/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,x;
    cin>>s>>t>>x;
    if(s<t){
    if(s<=x && x<=t){cout<<"Yes";}
    else{cout<<"No";}}
    else{
    if(s<=x || x<t){cout<<"Yes";}
    else{cout<<"No";}}}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{int n,x,i,k=0,l;
cin>>n>>x;
int a[n];
for(i=1;i<=n;i++)
    cin>>a[i];
i=x;
while(1){
    if(a[i]==0)
        break;
    k++;
    l=a[i];
    a[i]=0;
    i=l;}
    cout<<k<<endl;
}
