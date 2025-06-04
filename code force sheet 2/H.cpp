#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n , i = 2, X ,j = 1;
    cin>>n;

    X= sqrt(n);
while(i <= X)
    {
        if(n%i == 0)
        {   j = 0;
            break;
        }
        i++;
        }

    if(j)
        {cout<<"YES"<<endl;}
    else
        {cout<<"NO"<<endl;}
  return 0;
}
