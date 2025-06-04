#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a[26]={0};
    int i,j;
    for(i=0;s[i]!='\0';i++)
    {   j=s[i]-'a';
        a[j]++;
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]!='\0')
      {
        cout<< char(i + 'a')<<" : "<< a[i]<< endl;
      }}}
