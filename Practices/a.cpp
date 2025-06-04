#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,i,a[100005],sum=0;
cin>>n;
for(i=0;i<n;i++){
cin>>a[i];
    sum+=a[i];

}
cout<<abs(sum)<<endl;
}
