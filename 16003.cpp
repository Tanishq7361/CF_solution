
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   11-10-2024
    Problem :
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll l, r, k;
    cin >> k >> l >> r;

    ll L = abs(l);
    ll R = abs(r);

    if (l > 0 || r < 0)
    {
        if (r < 0)
        {
            swap(L, R);
        }

        cout << ((R / k) - (L / k)) + !(L % k);
    }

    else
    {
        cout << ((R / k) + (L / k)) + 1;
    }

    return 0;
}