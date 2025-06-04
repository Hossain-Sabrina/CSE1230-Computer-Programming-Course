#include <bits/stdc++.h>
using namespace std;
int main()
{
        long long int i, t, x, n, fact = 1;
        cin >> t;
        for (i = 1; i <= t; i++)
        {
                cin >> n;
                fact = 1;
                if (n == 0)
                {
                        cout << "1" << endl;
                }
                else
                {
                        for (x = 1; x <= n; x++)
                        {

                                fact = fact * x;
                        }
                        cout << fact << endl;
                }
        }

        return 0;
}
