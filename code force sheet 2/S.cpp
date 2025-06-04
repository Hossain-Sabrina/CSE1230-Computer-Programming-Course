#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, t, x, y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        int maxx = max(x,y);
        int minn = min(x,y);
        int sum =0;
        for(i=minn+1; i<maxx ; i++)
        {
            if((i%2)!=0)
            {
                sum+=i;

            }
        }cout<<sum<<endl;
    }

    return 0;
}
