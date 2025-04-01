/*
    AUTHOR  :   Tanishq Shah
    DATE    :   30-08-2024

    DON'T SEE CODE
    FIRST TRY BY YOUR SELF
    OTHERWISE YOU WILL NOT LEARN ANYTHING
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, z, y, x;
    cin >> n >> m;
    if (n < m)
    {
        cout << -1;
    }
    else if (n == m)
    {
        cout << n;
    }
    else if (n % 2 == 0)
    {
        x = n / 2;
        for (int i = 0; i < (n / 2) + 1; i++)
        {
            if (x % m == 0)
            {
                cout << x;
                break;
            }
            else
            {
                x++;
                if (x >= n && x % m != 0)
                {
                    cout << -1;
                    break;
                }
            }
        }
    }
    else
    {
        y = (n - 1) / 2;
        z = y + 1;
        for (int i = 0; i < ((n - 1) / 2) + 1; i++)
        {
            if (z % m == 0)
            {
                cout << z;
                break;
            }
            else
            {
                z++;
                if (z >= n && z % m != 0)
                {
                    cout << -1;
                    break;
                }
            }
        }
    }
}