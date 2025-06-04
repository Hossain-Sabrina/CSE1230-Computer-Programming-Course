#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    int t,i, length, length2,L;
    cin>>t;
    while(t--){
    string s ,t;
    cin>>s>>t;
    length = s.size();    length2 = t.size();
    L=min(length,length2);
    for(i=0;i<L;i++){
        cout<<s[i]<<t[i];
    }if(length>length2){
    for(i=L;i<length;i++)
        cout<<s[i];
    }
    else if(length2>length){
        for(i=L;i<length2; i++)
            cout<<t[i];
    }cout<<endl;}
}
