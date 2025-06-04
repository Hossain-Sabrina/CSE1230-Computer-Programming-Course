#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l=0,r=0,k=0,c,i,j;
    for (i = 0; i<s.size(); i++)
    {
        if (s[i] == 'L')
        l++;
        else
        r++;
        if (l == r)
        k++;
    }
    cout<<k<<endl;
    c = l = r = 0;
    for(i=0; i< s.size(); i++)
    {
        if(s[i] == 'L')
        l++;
        else
        r++;
        if(l==r)
        {
        for(j=c;j<=i;j++)
        {
        cout<<s[j];
        }
        cout<<endl;
        c=1+i;
        l=r=0;
        }
    }
}
