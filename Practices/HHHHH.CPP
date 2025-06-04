#include<bits/stdc++.h>
#include<string.h>
using namespace std;const int MAX_CHAR = 26;
int factorial(int n)

{
    int f = 1;
    for (int i = 2; i <= n; i++)
        f = f * i;
    return f;
}

int countd(string s)
{
    int length = s.length();

    int freq[MAX_CHAR];
    memset(freq, 0, sizeof(freq));

    for (int i = 0; i < length; i++)
        if (s[i] >= 'a')
            freq[s[i] - 'a']++;


    int f = 1;
    for (int i = 0; i < MAX_CHAR; i++)
        f = f * factorial(freq[i]);

    return factorial(length) / f;
}

int main()
{
    string s;
    cin>>s;
   cout<<countd(s)<<endl;
    return 0;
}
