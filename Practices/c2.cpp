#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    char s[10005], x[10005];
    cin>>s>>x;
    if(strcmp(s,x)>0){
        cout<<x;
    }
    if(strcmp(s,x)<0){
        cout<<s;
    }
    if(strcmp(s,x)==0){
        cout<<s;
    }
}
