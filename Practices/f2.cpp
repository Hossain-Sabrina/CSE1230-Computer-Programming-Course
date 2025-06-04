//too long string
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t,x;
    char s[105];
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>s;
        int y=strlen(s);
        x=0;
        if(y<=10)
        {
            cout<<s<<endl;
        }
        else
        {
            for(int j=1; j<y-1; j++)
            {
                x++;
            }
            cout<<s[0]<<x<<s[y-1]<<endl;
        }
    }
}
