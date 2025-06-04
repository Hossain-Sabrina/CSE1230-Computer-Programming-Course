#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  arr[1005], a[1005], count, i;

    cin >> count;

    for(i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    for(i = 0; i < count; i++)
    {
        a[i] = arr[count -i-1];
    }
    for(i = 0; i < count; i++)
    {
        cout << a[i] << " ";
    }

    return 0;

}
