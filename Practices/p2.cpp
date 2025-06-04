#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
string s;
int k, flag=0;
getline(cin,s);
int l =s.size();
for(int i=0; i<l; i++){
    if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
        if(!flag){
        k++;
        flag=1;
        }
    }
    else{
        flag=0;
    }
}
cout<<k<<endl;
return 0;
}
