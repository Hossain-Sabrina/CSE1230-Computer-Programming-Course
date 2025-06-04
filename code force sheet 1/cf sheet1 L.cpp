#include <bits/stdc++.h>
using namespace std;
int main()
{
    char f1[10000],f2[10000],c1[10000],c2[10000];

    cin>>f1>>c1;
    cin>>f2>>c2;
    int l1=strcmp(c1,c2);
    int l2=strcmp(c2,c1);
    if(l1==l2)
        cout<<"ARE Brothers"<<endl;
    else
    cout<<"NOT"<<endl;
    return 0;
}
