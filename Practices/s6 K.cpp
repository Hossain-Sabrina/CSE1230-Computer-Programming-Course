#include<bits/stdc++.h>
using namespace std;
long long fact(int x){
int i, f=1;
for(i=2;i<=x;i++){f=f*i;}
return f;
}
int main(){
int n,r;
long long ncr, npr;
cin>>n>>r;
npr=fact(n)/fact(n-r);
ncr=npr/fact(r);
cout<<ncr<<" "<<npr<<endl;

}
