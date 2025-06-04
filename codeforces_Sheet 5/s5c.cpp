#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
bool oddcheck(int o);
bool ispalindrom(int p);
int main(){
int n;
cin>>n;
if(oddcheck(n)&& ispalindrom(n)){cout<<"YES";}
else{cout<<"NO";}
}
bool oddcheck(int o)
{
    if(o%2!=0){return true;}
    else{return false;}
}
bool ispalindrom(int p){
        vector<char>S,s;
while(p!=0){
    int k=p%2;
if(k==1){S.push_back('1');}
    else{S.push_back('0');}
    p/=2;
}
s=S;
reverse(S.begin(),S.end());
bool pal= true;
for(int i=0;i<S.size();i++){
    if(s[i]!=S[i]){pal=false;
    break;}

}
if(pal){return true;}
else{return false;}
}
