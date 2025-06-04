#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int l1,l2,r1,r2;
cin>>l1>>r1>>l2>>r2;
long long min,max;
if(l1>=l2)
min=l1;
else
min=l2;
if(r1>=r2)
max=r2;
else
max=r1;
if(max>=min)
cout<<min<<" "<<max;
else
cout<<-1;
return 0;
}
