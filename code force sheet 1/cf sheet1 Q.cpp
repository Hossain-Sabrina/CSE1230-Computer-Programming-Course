#include<bits/stdc++.h>
using namespace std;
int main(){
double x ,y;
cin>>x>>y;
if(x>0 && y>0){cout<<"Q1";}
else if(x<0 && y>0){cout<<"Q2";}
else if(x<0 && y<0){cout<<"Q3";}
else if(x>0 && y<0){cout<<"Q4";}
else if(x==0 && y==0){cout<<"Origem"<<endl;}
else if((x<0 || x>0) && y==0){cout<<"Eixo X"<<endl;}
else if(x==0 && (y<0 || y>0)){cout<<"Eixo Y"<<endl;}

return 0;
}
