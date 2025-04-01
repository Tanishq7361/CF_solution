/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   20-10-2024
    Problem :   1618C
    Status  :   completed
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define v vector
#define M 1000000007

ll gcd(ll n, ll m)
{
    while (n != 0 && m != 0)
    {
        if (n > m)
        {
            n = n % m;
        }
        else
        {
            m = m % n;
        }
    }
    if (n)
    {
        return m;
    }
    return n;
}

void solve()
{
    // int ct1 = 0, ct2 = 0;
    // ll n;
    // cin >> n;
    // ll a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // ll gc1 = gcd(a[0], a[2]);
    // for (int i = 2; i < n; i += 2)
    // {
    //     gc1 = gcd(a[i], gc1);
    // }
    // ll gc2 = gcd(a[1], a[3]);
    // for (int i = 3; i < n; i += 2)
    // {
    //     gc2 = gcd(a[i], gc2);
    // }

    // for (int i = 0; i < n; i += 2)
    // {
    //     if (a[i] % gc2 == 0)
    //     {
    //         ct2++;
    //         break;
    //     }
    // }
    // for (int i = 1; i < n; i += 2)
    // {
    //     if (a[i] % gc1 == 0)
    //     {
    //         ct1++;
    //         break;
    //     }
    // }
    // if (ct1 + ct2 == 2)
    // {
    //     cout << 0 << endl;
    // }
    // if (ct1 + ct2 == 0)
    // {
    //     cout << gc1 << endl;
    // }
    // if (ct1 == 1 && ct2 == 0)
    // {
    //     cout << gc2 << endl;
    // }
    // if (ct2 == 1 && ct1 == 0)
    // {
    //     cout << gc1 << endl;
    // }
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}