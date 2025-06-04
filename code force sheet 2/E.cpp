#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, l;
    int N[10000];
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>N[i];
    }
    l = N[0];
    for(int i = 1; i < n; i++)
    {
        if(l < N[i])
            l = N[i];
    }
    cout<<l<<endl;
    return 0;
}
