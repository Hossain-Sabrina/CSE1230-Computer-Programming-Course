/*#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
long long int a,b,c,d;

cin>>a>>b>>c>>d;
if(pow(a,b) > pow(c,d))
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
   double A,B,C,D,X,Y;
   cin>>A>>B>>C>>D;
   X=B*log10(A);
   Y=D*log10(C);
    if(X>Y)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
