#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c;
char s,e;
scanf("%d %c%d %c%d",&a,&s,&b,&e,&c);
if(s == '+'){
if(a + b == c){
printf("Yes\n");
}
else{
printf("%d",a+b);
}
}
else if(s == '-'){
if(a - b == c){
printf("Yes\n");
}
else{
printf("%d\n",a-b);
}
}
else if(s == '*'){
if(a * b == c){
printf("Yes\n");
}
else{
printf("%d\n",a*b);
}
}
return 0;
}
