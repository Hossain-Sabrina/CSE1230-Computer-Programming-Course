#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0,n,a[1005];
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=i; j<=n; j++)
            {
                int x=0;
                int y=0;
                y=a[i];
                for(int k=i; k<=j; k++)
                {
                    if(j==i)
                    {
                        c++;
                    }
                    else if(j>i)
                    {
                        if(k>i && a[k]>y)
                        {
                            y=a[k];
                            x++;
                        }
                    }
                }
                if(x>0 && x==(j-i))
                {
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}
