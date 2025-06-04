 // Convert lowercase to uppercase
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    char s[1000005];
    gets(s);
    int m=strlen(s);
    for(int i=0; i<m; i++){
        if (s[i] >= 'a' && s[i] <= 'z')

            s[i] = s[i] - 32;
        else if (s[i] >='A'&& s[i]<='Z')
            s[i]=s[i]+32;
        else if(s[i]==',')s[i]=s[i]-12;
    }
cout<<s<<endl;
}
