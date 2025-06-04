#include<bits/stdc++.h>
using namespace std;
int main()
{long long int n,i, j, rem;
cin>>n;
for(i=1 ; i<=n ;i++)
{
    rem=0;
for(j=1 ; j<=i ;j++)
{
    if(i%j==0)
    rem++;
}
    if(rem==2)
    printf("%d ",i);
}
return 0;
}
