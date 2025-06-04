#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
int t,n,m;
cin>>t;
while(t--){
        cin>>n>>m;
if(m>n)cout<<"Alice"<<endl;
else if(n>m)cout<<"Bob"<<endl;
else if(n==m)cout<<"Bob"<<endl;
}
}
