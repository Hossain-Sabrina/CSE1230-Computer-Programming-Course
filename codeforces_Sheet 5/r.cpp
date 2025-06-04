#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int a,b;
    cin>>s;
    cin>>a>>b;
    if(b>12){
        cout<<s<<": "<<b-a<<" Hour(s)"<<endl;
    }
    else if(a==b){
            cout<<s<<": 24 Hour(s)"<<endl;

    }
    else if(a==12 && b<12){
        cout<<s<<": "<<b<<" Hour(s)"<<endl;
    }
    else{cout<<s<<": "<<b-a<<" Hour(s)"<<endl;}
    }
