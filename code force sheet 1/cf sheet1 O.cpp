
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int A,B;
    char n;
    cin>>A>>n>>B;
    if(n=='+')
        cout<<A+B<<endl;

    else if(n=='-')
        cout<<A-B<<endl;

    else if(n=='/')
        cout<<A/B<<endl;

else if(n=='*')
        cout<<A*B<<endl;
 return 0;
}
