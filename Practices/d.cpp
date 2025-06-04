#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[1000],n,i;
cin>>n;
for(i=0;i<n;i++){
        cin>>a[i];
}
for(i=0; i<n;i++){
    if(a[i]<=10){
            cout<<"A["<<i<<"] = "<<a[i]<<endl;
}}

}
