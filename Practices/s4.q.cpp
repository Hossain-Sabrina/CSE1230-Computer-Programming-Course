#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,k,x=-1;
    getline(cin,s);
    for(i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
        for(j=i-1;j>x;j--)
        {
        cout<<s[j];
        }
        printf(" ");
        x=i;
        }
    }
    for(i=(s.size())-1;i>x;i--)
    {
    cout<<s[i];
    }
}
