#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    int i,n,q,l,r,pos;
    char p;
    cin>>n>>q;
    string s,t,x;
    cin>>s;
    while(q--)
    {
        cin>>t;
        if(t=="pop_back")
        s.pop_back();
        if(t=="front")
        {
        cout<<s.front()<<endl;
        }
        if(t=="back")
        {
        cout<<s.back()<<endl;
        }
       if(t=="sort")
        {
            cin>>l>>r;
            if(l>r)
            swap(l,r);
            sort(s.begin()+l-1,s.begin()+r);
        }
        if(t=="reverse")
        {
            cin>>l>>r;
            if(l>r)
            swap(l,r);
            reverse(s.begin()+l-1,s.begin()+r);
        }
        if(t=="print")
        {
            int l;
            cin>>l;
            cout<<s[l-1]<<endl;
        }
        if(t=="substr")
        {
            cin>>l>>r;
            if(l>r)
            swap(l,r);
            x=s.substr(l-1,r-l+1);
            cout<<x<<endl;
        }
        if(t=="push_back")
        {
        cin>>p;
        s.push_back(p);
        }}
}
