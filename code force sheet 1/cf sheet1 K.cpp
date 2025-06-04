#include <iostream>
using namespace std;
int max(int a, int b, int c){
int r;
if(a>b &&a>c)
    r=a;
else if(b>a && b>c)
    r=b;
else
    r=c;
return r;
}
int min(int a, int b, int c)
{int r;
if(a<b && a<c)
    r=a;
else if(b<a && b<c)
    r=b;
else
    r=c;
return r;
}
int main()
{

    int a, b, c;
    cin>>a>>b>>c;
    cout<<min(a,min(b,c))<< " ";
    cout<<max(a,max(b,c));
    return 0;
}

