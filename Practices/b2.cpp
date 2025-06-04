#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='\\')
            break;
        cout<<s[i];
    }
    return 0;
}
