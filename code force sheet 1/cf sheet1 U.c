#include<bits/stdc++.h>
using namespace std;
int main()
{
    char number[10];
    int flag = 0;
    int length, i = 0;

    cin>>number;
    length = strlen(number);

    while(number[i++] != '\0')
    {
        if(number[i] == '.')
        {
            flag = 1;
            break;
        }
    }
    if(flag)
        cout<<"float "<<number;
    else
        cout<<"int "<<number;

}
