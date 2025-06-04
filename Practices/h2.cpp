#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){

   char s[100000];
   int t;
   cin>>t;
   for(int i=1; i<=t; i++)
   {
    cin>>s;
    int m=strlen(s);
    int n=0,j;
    for(j=0; j<m; j++)
    {
        if(s[j]=='1' && s[j+1]=='0' && s[j+2]=='1' || s[j]=='0' && s[j+1]=='1' && s[j+2]=='0')
        {
        n=1;
        }
    }
    if(n==1)
    {
    cout<<"Good"<<endl;
    }
    else
    {
    cout<<"Bad"<<endl;
    }}}
