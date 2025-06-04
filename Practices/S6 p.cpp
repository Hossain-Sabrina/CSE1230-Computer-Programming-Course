#include<bits/stdc++.h>
using namespace std;
int main(){
long long n;
cin>>n;
double count =0;
for(int i=2; i<=n; i++)
    count +=log10(i);

cout<<"Number of digits of "<<n<<"! is "<<floor(count) +1<<endl;
return 0;
}
