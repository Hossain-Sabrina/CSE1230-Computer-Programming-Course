#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100005],n,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n/2; i++)
    {
        if(arr[i]!=arr[n-1-i])
            break;

    }
    if(i==n/2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
