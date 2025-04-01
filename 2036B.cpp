///////////////////////////////////////////////////////////////////////////////////////////

// problem : 2036B

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long int>
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vll b(n), c(n);
        for (int i = 0; i < k; i++)
        {
            cin >> b[i] >> c[i];
        }
        sort(c.begin(), c.end());
        ll ans = 0;
        ll i = k - 1;
        if (n >= k)
        {
            ans = accumulate(c.begin(), c.end(), 0LL);
        }
        else
        {
            while (n--)
            {
                ans += c[i];
                i--;
            }
        }
        cout << ans << endl;
    }
}