#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n,a=0,p;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>p;
        a+=p;
    }
    cout<<fixed<<setprecision(12)<<a/n<<endl;
}

 /*
    int level,p,q,a[200],cnt=0;
    cin>>level;
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>a[i];
    }
    cin>>q;
    for(int i=p; i<p+q;i++){
        cin>>a[i];
    }
    sort(a,a+(p+q));
    for(int i=0;i<p+q;i++){
        if(a[i]!=a[i+1]){
            cnt++;
        }
    }
    if(cnt==level)cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    }/* int t;
    cin>>t;
    while(t--){
            int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int j=n-1,i=0;
        while(j>=0 && a[j])
            j--;

        while(i<n && a[i])
            i++;

        if(j<0)cout<<0<<endl;
        else cout<<j-i+2<<endl;
    }
return 0;


  long long int t,n,ans;
    cin>>t;
    while(t--)
    {
    cin>>n;

     ans=pow(2,n)-1;
     cout<<ans<<endl;
}*/
