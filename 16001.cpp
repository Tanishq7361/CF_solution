
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   09-10-2024
    Problem :   1358C
    Status  :   Incomplete
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int fact(int n, int m, int p)
{
    if (m <= 1)
    {
        m = 1;
    }
    if (p <= 1)
    {
        p = 1;
    }
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return (n / (p * m)) * fact(n - 1, m - 1, p - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        ll n = (x2 - x1) + (y2 - y1);
        ll m = x2 - x1;
        ll p = y2 - y2;
        cout << fact(n, m, p) << endl;
    }
}