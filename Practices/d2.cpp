#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
string a,b;
getline(cin,a);
int x=a.length();
getline(cin,b);
int y=b.length();
cout<<x<<" "<<y<<endl;
string c;
c=a+b;
cout<<c<<endl;
char temp = a[0];
a[0] = b[0];
b[0] = temp;
cout<<a<<" "<<b;
}
