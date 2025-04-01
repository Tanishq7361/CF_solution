/*
    Code By : Tanishq Shah
    Date : 26-10-2024
    Problem :
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define bitcount __builtin_popcountll
#define INF 1e18 + 9
#define MAX 1000001
#define stc static_cast
#define fr(i, a, n) for (int i = a; i <= n; ++i)
#define frr(i, a, n) for (int i = a; i >= n; --i)
#define inp(i, a, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
#define srt(v) sort(v.begin(), v.end())
#define maxEle(v) *max_element(v.begin(), v.end())
#define minEle(v) *min_element(v.begin(), v.end())
#define pb push_back
#define YES cout << "YES\n"
#define NO cout << "NO\n"
const int MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return (b == 0) ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
bool isPowTwo(ll n) { return n > 0 && (n & (n - 1)) == 0; }
bool isPs(ll n)
{
    if (n < 0)
        return false;
    ll sr = stc<int>(sqrt(n));
    return (sr * sr == n);
}

void solve()
{
    ll ct = 0;
    ll n, s, T;
    cin >> n >> s >> T;
    ll x, y;
    cin >> x >> y;
    ll a[n], b[n], k[n];
    vector<pair<ll, pair<ll, ll>>> cost;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
    }

    for (int i = 0; i < n; i++)
    {
        ll travelCost = (abs(x - a[i]) + abs(y - b[i])) * s;
        ll fireExtCost = k[i];
        ll totalCost = 2 * travelCost + fireExtCost;
        cost.push_back({totalCost, {travelCost + fireExtCost, travelCost}});
    }

    sort(cost.begin(), cost.end());

    ll i = 0;
    while (i < n)
    {
        if (T >= cost[i].second.first)
        {
            T -= cost[i].second.first;
            T -= cost[i].second.second;
            ct++;
        }
        i++;
    }

    cout << ct << endl;
}

signed main()
{
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
