#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,b=1,i,r,count;
    long long int a;
    cin>>t;
   while(t--)
    {
        cin>>a;
        count=0;
        while(a>0)
        {
            if(a%2==1)
                count++;
            a/=2;
        }
        int sum=0;
        sum=pow(2,count)-1;
         cout<<sum<<endl;
    }
    return 0;
}
