#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int A,B,C,D,X;
    int a,b;
    cin>>A>>B>>C>>D;
    if(A,B,C,D>1000){
      X=((A%100)*(B%100)*(C%100)*(D%100));
      a=X%10;
      b=(X/10)%10;
      cout<<b<<a<<endl;

    }
    else
    {
        X=A*B*C*D;
        a=X%10;
        b=(X/10)%10;
        cout<<b<<a<<endl;
    }

    return 0;
}
