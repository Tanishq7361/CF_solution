/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   18-10-2024
    Problem :   492B
    Status  :   completed
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define v vector
#define M 1000000007

void solve()
{
    ll n, l;
    cin >> n >> l;
    long double a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    long double d = 2;
    long double dif, difold;
    difold = max(a[0] - 0, l - a[n - 1]);

    for (int i = 1; i < n; i++)
    {
        difold = max(((a[i] - a[i - 1]) / d), difold);
    }
    cout << setprecision(10);

    cout << difold << endl;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}