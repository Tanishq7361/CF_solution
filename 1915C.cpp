/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   18-10-2024
    Problem :   1915C
    Status  :   completed
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define v vector
#define M 1000000007

int sqrt1(ll n)
{
    int z = sqrt(n);
    if (z * z == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void solve()
{
    int n;
    cin >> n;
    ll sum = 0;
    v<int> v1(n);
    for (auto &i : v1)
    {
        cin >> i;
        sum += i;
    }
    if (sqrt1(sum))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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