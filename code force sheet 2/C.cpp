#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000], N,i, pos = 0, neg = 0, even = 0, odd = 0, zero = 0;
    cin>>N;
    for(i = 0; i < N; i++)
    {
        cin>>a[i];
        if(a[i]==0)
            zero++;
        else if(a[i] <0)
            neg++;
        else
            pos++;


        if((a[i] == 0)||(a[i] % 2 == 0))
        {

            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
}
