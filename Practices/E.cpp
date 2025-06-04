#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=1; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<n; i++)
    {
        int temp = arr[0];
        for(int i=1; i<n; i++)
        {
            if(temp>arr[i])
            {
                temp=arr[i];
            }
        }
        temp=arr[0];
        int position = 0;
        for(i = 1; i < n; i++)
        {
            if(temp > arr[i])
            {
                temp = arr[i];
                position = i;
            }
        }
        cout<<temp<<" "<<position<<endl;
    }
    return 0;

}
