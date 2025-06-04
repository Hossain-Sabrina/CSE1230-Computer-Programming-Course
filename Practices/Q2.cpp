#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
string s;
int s1,j=0,k;
getline(cin,s);
int len=s.size();
for(int i=0;i<len ;i++){
    if(s[i]!=' '){
    s1[j]=s[i];
    j++;}
    if((s[i]==' ') && (s[i]==len){

       reverse(s1.begin(),s1.end());
       j=0;
       }cout<<s1;
}


}
