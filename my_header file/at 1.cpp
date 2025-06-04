#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1=="ABC" || s2=="ARC" || s3=="AGC")
    cout<<"AHC"<<endl;
    else if(s1=="ABC" || s2=="ARC" || s3=="AHC")
        cout<<"AGC"<<endl;
    else if(s1=="ABC" || s2=="AGC" || s3=="AHC")
    cout<<"ARC"<<endl;
    else if(s1=="ARC" || s2=="AGC" || s3=="AHC")
        cout<<"ABC"<<endl;
    return 0;
}
