/*  AUTHOR  :   Tanishq Shah
    DATE    :   30-08-2024
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, t, z = 0;
    cin >> n >> t;
    if (t < 10)
    {
        for (int i = 0; i < n; i++)
        {
            cout << t;
        }
    }
    else
    {
        if (t = 10 && n != 1)
        {
            for (int i = 0; i < n - 1; i++)
            {
                cout << 1;
            }
            cout << 0;
        }
        cout << -1;
    }
}