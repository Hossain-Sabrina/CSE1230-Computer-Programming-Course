#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,N;
    cin>>N;
    if(N==1 || N==0)
        {cout<<"-1"<<endl;}
    else{
    for(i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
            cout << "" << i<<endl;
    }}
    return 0;
}
