#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char s[10005];
    cin>>s;
    int l=strlen(s), f=0;
    for(int i=0; i<l; i++)
    {
        if(s[i]!=s[l-i-1])
        {
            f=1;
            break;
        }
    }
    if(f==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
