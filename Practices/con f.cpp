#include<bits/stdc++.h>
using namespace std;
int main()
{int i,n,a[10005];
cin>>n;
for(i=0;i<n;i++)
    cin>>a[i];
  int temp=a[n-1];
  for(i=n-1;i>0;i--){
    a[i]=a[i-1];

  }a[0]=temp;
  for(i=0; i<n;i++){
    cout<<a[i]<<" ";
  }
    return 0;
}
