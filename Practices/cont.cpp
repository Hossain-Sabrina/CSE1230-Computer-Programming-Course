#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s,str;
        cin>>s>>str;

        vector<int>v;
        for(int i=0;i<str.size();i++){
            for(int j=0;j<s.size();j++){
                if(str[i]==s[j]){
                    v.push_back(j+1);
                    break;
                }
            }
        }
        int sum=0;
        for(int i=0;i<v.size()-1;i++){
        sum+=abs(v[i+1]-v[i]);
     }

     cout<<sum<<endl;

    }

    return 0;
}
