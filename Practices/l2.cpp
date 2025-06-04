#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    int i, N , Q,l,r,pos;
    char p;
    cin>>N>>Q;
    string s,t,x;
    cin>>s;
    for( i=0; i<Q; i++){
        cin>>t;
        if(t=="pop_back"){
                s.pop_back();
        }
        else if(t=="front"){
            cout<<s.front()<<endl;
        }
        else if(t=="back"){
            cout<<s.back()<<endl;
        }
        else if(t=="sort"){
            cin>>l>>r;
            sort(s.begin()+l-1,s.begin()+r-1);
            cout<<s<<endl;
        }else if(t=="reverse"){
                 cin>>l>>r;
                 reverse(s.begin()+l-1,s.begin()+r-1);
            cout<<s<<endl;
        }else if(t=="print"){
            cin>>pos;

            cout<<s[pos-1]<<endl;
        }else if(t=="substr"){
            cin>>l>>r;
            x=s.substr(l-1,r-l-1);
            cout<<x<<endl;
        }
        else if(t=="push_back"){
                cin>>p;
        s.push_back(p);

            cout<<s<<endl;
        }}}
