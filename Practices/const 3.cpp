#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n, a[100005];
cin>>t;
for(int i=0;i<t;i++){
    cin>>n;
    int m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m=sizeof(a)/sizeof(a[0]);
        sort(a,a+m);
    }  for (int i = 0; i < n;i++)
        cout << a[i] << " ";

}}
