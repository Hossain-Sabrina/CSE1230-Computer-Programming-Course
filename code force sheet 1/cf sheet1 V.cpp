#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long A,B;
 char ch;
 cin>>A>>ch>>B;
 if(ch=='>')
 {
     if(A>B)
     {
         cout<<"Right"<<endl;
     }
     else
        {
        cout<<"Wrong"<<endl;
        }
 }
 else if(ch=='<')
 {
     if(A<B)
     {
         cout<<"Right"<<endl;
     }
     else
        {
        cout<<"Wrong"<<endl;
        }
 }
 else
 {
     if(A==B)
     {
         cout<<"Right"<<endl;
     }
     else
        {
        cout<<"Wrong"<<endl;
        }
 }
return 0;
}
