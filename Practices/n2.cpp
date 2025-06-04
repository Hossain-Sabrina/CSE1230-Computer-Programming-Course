#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
string s;
int n,k=0;
cin>>n;
cin>>s;
for(int i=0;i<n; i++){
    if(s[i]!=s[i+1]){
        k++;
    }
}cout<<k<<endl;
}
