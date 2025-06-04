#include <bits/stdc++.h>
using namespace std;
int main()
{ ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n],one=0,zero=0,maxx=-1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            one +=1;
            if(zero>0)
            {
                zero=zero-1;
            }
        }
        else
        {
            zero+=1;
            maxx=max(zero,maxx);
        }
    }
    cout<<one+maxx;
}
