#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int a, b,len, f=0;
    cin>>a>>b;
    string s;
    cin>>s;
    len=s.size();
    if(len!=a+b+1)
    {
        cout<<"No";
    }
    else
        for(int i=0; i<len; i++)
        {
            if(i==a)
            {
                if(s[i]!='-')
                {
                    f=1;

                }}
                else if(s[i]<0 || s[i]>9)
                {
                    f=1;
                }
                if(f==0)
                {
                    cout<<"Yes";
                }
                else
                {
                    cout<<"No";
                }
            }

}
