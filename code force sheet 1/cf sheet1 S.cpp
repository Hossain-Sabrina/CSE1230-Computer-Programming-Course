#include<bits/stdc++.h>
using namespace std;
int main()
{
int a, b, c, mx,mn,middle;
cin>>a>>b>>c;
mx=max(a,max (b,c));
mn=min(a,min (b,c));
middle =a+b+c-mx-mn;
cout<<mn<<endl<<middle<<endl<<mx<<endl;
cout<<endl<<a<<endl<<b<<endl<<c<<endl;
return 0;
}
