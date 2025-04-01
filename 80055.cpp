
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   13-10-2024
    Problem :   2013A
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, y, z, w;
        cin >> n;
        cin >> x >> y;
        ll sum = 0;
        z = !(n % y);
        w = !(n % x);
        if (x >= y)
            sum += (n / y) + (!z);
        if (x < y)
            sum += (n / x) + (!w);
        cout << sum << endl;
    }
}