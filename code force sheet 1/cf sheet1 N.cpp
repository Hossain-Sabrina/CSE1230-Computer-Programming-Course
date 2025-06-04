#include <bits/stdc++.h>

using namespace std;
int main()
{
    char n,c1,c2;

    cin>>n;
    if(n>='a' && n<='z')
    {
        c1=toupper(n);
        cout<<c1;
    }
    if(n>='A' && n<='Z')
    {
        c2=tolower(n);
        cout<<c2;
    }
    return 0;
}
