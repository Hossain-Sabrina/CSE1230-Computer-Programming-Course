#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,i,y,tem;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	   cin>>x;
	   tem = x;
	   if(x==0)
	   cout<<x;
	   while(tem!=0)
	   {
	     y=tem%10;
	     cout<<y<<" ";
	     tem=tem/10;
	   }
	   if(i==n)
	     break;
	   cout<<endl;
	}
  return 0;
}
