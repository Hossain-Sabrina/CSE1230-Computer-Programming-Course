#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
	cin>>n>>m;
	int od=0;
	for(int i=0;i<n;i++){
		if(i%2==0){
			for(int j=0;j<m;j++){
				cout<<"#";
			}
		}
		else{
			od++;
			for(int j=0;j<m;j++){
				if(od%2==1&&j==m-1){
					cout<<"#";
				}
				else if(od%2==0&&j==0){
					cout<<"#";
				}
				else{
					cout<<".";
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}


 /*  int t,k;
    string a;
    char b;
cin>>t;
for(int i=0;i<t ;i++){
    cin>>a;
    cin>>b;
    if(b==a[i] && i%2==0){cout<<"YES"<<endl;}
else{cout<<"NO";}
    }
}


 int n, k, l, c, d, p, nl, np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int x=0,y=0,z=0,ans=0;
x=(k*l)/nl;
y=c*d;
z=p/np;
ans=min(z,min(x,y));
cout<<ans/n<<endl;


 int t,a,b,m=0,c=0;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>a>>b;
    if(a>b){m++;}
    if(b>a){c++;}
  }
  if(m==c){cout<<"Friendship is magic!^^"<<endl;}
    else if(c>m){cout<<"Chris"<<endl;}
    else{cout<<"Mishka"<<endl;}

  int n,i,j,sum=0,sum1=0,sum2=0;
   cin>>n;
   int a[100][100];
   for(i=1;i<=n;i++){
    for(j=1;j<4;j++){
        cin>>a[i][j];
    }
    sum+=a[i][1];
    sum1+=a[i][2];
    sum2+=a[i][3];
   }
   if(sum==0 && sum1==0 && sum2==0){cout<<"YES"<<endl;}
   else{cout<<"NO"<<endl;}


  elephant
  int a,y;
    cin>>a;
    y=a/5;
    if(a%5!=0){
        cout<<y+1<<endl;
    }
   else{
    cout<<y<<endl;
   }

 twin
 int t,a[105],x=0,y=0,ans=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a[i];
        x+=a[i];
    }
    x=x/2;
    sort(a,a+t);
  for(int j=t-1;j>=0;j--){y+=a[j];
  ans++;
  if(y>x)
    break;
  }
  cout<<ans<<endl;


   int k,n,w,i,sum=0,y=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++){
        sum+=(k*i);
    }
    y=sum-n;
    if(y>0){cout<<y;}
    else{
        cout<<"0";
    }


    double a,b,c,x,y;
    cin>>a>>b>>c>>x;
  cout<<fixed<<setprecision(12);
  if(x<=a)cout<<1<<endl;
  else{
    if(x>=a+1 && x<=b){
        y=b-a;
        cout<<c/y<<endl;
    }
    else{cout<<0<<endl;}
  }


 int year,a,b,c,d;
cin>>year;
while(1){
    year=year+1;
    a=year/1000;
    b=year/100%10;
    c=year/10%10;
    d=year%10;
    if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d) break;
}
cout<<year;*/
