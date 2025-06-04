#include<bits/stdc++.h>
using namespace std;
int main()
{int i,n,sum=0;
char s;
cin>>n;
for(i=0;i<n;i++){
    cin>>s;
    sum=sum+(s-48);
}
cout<<sum<<endl;
    return 0;
}
