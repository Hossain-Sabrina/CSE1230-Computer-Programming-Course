#include<bits/stdc++.h>
using namespace std;
int main(){
 int arr[10005];
    int n, i, j, tmp;
   cin>>n;
       for(i=0;i<n;i++)
            {
	    cin>>arr[i];
	    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[j] <arr[i])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
      cout<<arr[i]<<" ";
    }

}
