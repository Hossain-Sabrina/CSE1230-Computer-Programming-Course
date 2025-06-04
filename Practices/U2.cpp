#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int e,g,y,p,t;
    e=g=y=p=t=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='e'|| a[i]=='E')
        e++;
        else if(a[i]=='g' || a[i]=='G')
        g++;
        else if(a[i]=='y' || a[i]=='Y')
        y++;
        else if( a[i]=='p'|| a[i]=='P')
        p++;
        else if(a[i]=='t' || a[i]=='T' )
        t++;
    }
    int x=0;
    x=min(min(min(min(e,g),y),p),t);
    cout<<x;
}
