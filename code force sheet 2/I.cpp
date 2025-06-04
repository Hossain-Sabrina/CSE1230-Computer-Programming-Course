#include<bits/stdc++.h>
using namespace std;
int main()
{long long int n,r,sum=0,temp;

  cin>>n;
 temp=n;
 while(n>0)
{
 r=n%10;
 sum=(sum*10)+r;
 n=n/10;
}
cout<<sum<<endl;
if(temp==sum)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
  return 0;
}
