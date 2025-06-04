#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string x="hello";
    string y;
    cin>>y;
    int i,j=0,k=0;
    for(i=0; i<y.size(); i++)
    {
        if(y[i]==x[j])
        {
            k++;
            j++;
            if(j==5)
            {
                break;
            }
        }
    }
    if(k==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
