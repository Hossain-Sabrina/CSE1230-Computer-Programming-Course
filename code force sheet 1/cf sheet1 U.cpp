#include<bits/stdc++.h>
using namespace std;
int main()
{
 double X;
 cin>>X;
 long long fp;
 fp=X;
 double lp=X-fp;
 if(lp==0.00)
 {
     cout<<"int "<<fp<<endl;
 }
 else
 {
     cout<<"float "<<fp<<" "<<endl;
 }

return 0;
}
