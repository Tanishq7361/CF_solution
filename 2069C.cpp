#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define stc static_cast
#define V vector
#define vll vector<ll>
#define pll pair<long long, long long>
#define mll map<long long, long long>
#define umll unordered_map<long long, long long>
#define vvl vector<vector<long long>>
#define srt(v) sort(v.begin(), v.end())
#define rev(x) reverse(x.begin(), x.end())
#define maxEle(v) *max_element(v.begin(), v.end())
#define minEle(v) *min_element(v.begin(), v.end())
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define bitcount __builtin_popcountll
#define ff first
#define ss second
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define one cout << "-1\n"
#define entr cout << '\n'
#define done return
#define fr(i, l, r) for (ll i = (l); i < (r); i++)
#define frr(i, r, l) for (ll i = (r - 1); i >= l; i--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const long long INF = 1e18 + 9;
const ll MOD = 1e9 + 7;
const long long MOD1 = 998244353;

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
ll power(ll a, ll b)
{
    ll ans = 1;
    a %= MOD1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans * a) % MOD1;
        }
        a = (a * a) % MOD1;
        b >>= 1;
    }
    return ans;
}
bool compbyss(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second < b.second;
}

// =-=-=-=-=-=-=-=-=-=-=-=-=-code starts here -=-=-=-=-=-=-=-=-=-=-=-=-= //

void solve()
{
    ll n;
    cin >> n;
    ll k=200000+5;
    vector<ll> a(n);
    fr(i, 0, n)
    {
        cin >> a[i];
    }
    vector<ll> pow2(k), inv(k);

    pow2[0] = 1;
    for (int i = 1; i < k; i++)
    {
        pow2[i] = (pow2[i - 1] * 2LL) % MOD1;
    }

    ll inv2 = 499122177;
    inv[0] = 1;
    for (int i = 1; i < k; i++)
    {
        inv[i] = (inv[i - 1] * inv2) % MOD1;
    }

    ll ans = 0, sum = 0;
    ll ones = 0, ct2 = 0;

    fr(i, 0, n)
    {
        if (a[i] == 1)
        {
            sum = (sum + inv[ct2]) % MOD1;
            ones++;
        }
        else if (a[i] == 2)
        {
            ct2++;
        }
        else if (a[i] == 3)
        {
            ll change = ((pow2[ct2] * sum) % MOD1 - ones + MOD1) % MOD1;
            ans = (ans + change) % MOD1;
        }
    }

    cout << ans << "\n";
}

signed main()
{
    
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}