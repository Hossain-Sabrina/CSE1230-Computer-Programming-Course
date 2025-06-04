
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	string s,s1,s2;
	cin>>s;
	for(int i=0; i<s.size();i++){
	if((s[0]>='A' || s[0]<='D') &&(s[1]>='A' || s[1]<='Z'))
    s1=toupper(s[0]);
    s2=towlower(s[i]);
    cout<<s1+s2;
	}

}
