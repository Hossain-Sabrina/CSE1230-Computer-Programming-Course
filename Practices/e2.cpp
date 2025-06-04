#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
     char S[1000000];
    int x=0,i;
    gets(S);
    for(i=0;S[i]!='\0';i++)
    {
        if(S[i]>='0' && S[i]<='9')
        x+=(S[i]-'0');
    }
    cout<<x;}

