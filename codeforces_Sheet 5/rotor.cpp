#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int l,k=0;
    cin>>l;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    if(l==1){cout<<"Yes";}
    else{
    for(int i=0; i<l; i++){
        if(s[i]==s[i+1]){k=1;
        break;}
    }
    if(k){cout<<"Yes";}
    else{cout<<"No";}}
    }


    /*
     string a,b,s,s1;
    cin>>a;
    cin>>b;
    cin>>s;
    s1=a+b;
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());
    if(s==s1){cout<<"YES";}
    else{cout<<"NO";}
    }


    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<n+1<<endl;
    }

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int m,n;
        int l=s.size();
        if(l%2!=0){
        n=l/2;
        m=n+1;
        }
        else{
        n=l/2;
        m=n;}
        int k=0;
        int left[26]={0};
        int right[26]={0};
        for(int i=0;i<n;i++){
            int j=s[i]-'a';
            left[j]++;
        }
        for(int i=m;i<l;i++){
            int j=s[i]-'a';
            right[j]++;
        }
        for(int i=0;i<26;i++){
            if(left[i]!=right[i]){
                k=1;
                break;
            }
        }
        if(k==1){cout<<"NO"<<endl;}
        else{cout<<"YES"<<endl;}
    }
    return 0;
}
*/
