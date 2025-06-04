#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int a, b,len, c=0,f=0;
    cin>>a>>b;
    string s;
    cin>>s;
    len=s.size();
    if(len==(a+b+1))
    {
        for(int i=0; i<len; i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                c++;
            }
            if(i==a && s[i]=='-')
            {
                f=1;
            }
        }
        if(c==(a+b)&& f==1)cout<<"Yes";
        else cout<<"No";
    }
    else cout<<"No";
}
