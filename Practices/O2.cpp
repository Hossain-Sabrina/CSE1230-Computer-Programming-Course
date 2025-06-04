#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i, j, k, n, s[32];
    scanf("%d\n", &n);

    for(i=0; i<26; i++)
        s[i]=0;

    char x;
    j= 0;
    for(i=0; i<n; i++)
    {
        scanf("%c", &x);
        j= x-'a';
        s[j]++;
    }
    for(i=0; i<26; i++)
        for(j=0; j<s[i]; j++)
            printf("%c", (char)i+'a');
    return 0;
}
