/*
    Coded By : Tanishq Shah
    Created : 16.01.2025  22:00:06
    Problem : 2034B
*/

#include <bits/stdc++.h>
using namespace std;

#define King ios_base::sync_with_stdio(0);
#define T       \
    cin.tie(0); \
    cout.tie(0);
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
const int MOD = 1e9 + 7;
const long long MOD1 = 989844166;

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
    a %= MOD;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return ans;
}
bool isPowOfTwo(ll n) { return n > 0 && (n & (n - 1)) == 0; }
bool isPerfectSq(ll n)
{
    if (n < 0)
        return false;
    ll sr = static_cast<int>(sqrt(n));
    return (sr * sr == n);
}
bool compbyss(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second < b.second;
}
ll modSum(ll a, ll b) { return (a % MOD + b % MOD) % MOD; }
ll modSub(ll a, ll b) { return ((a % MOD - b % MOD) + MOD) % MOD; }
ll modMult(ll a, ll b) { return (a % MOD * b % MOD) % MOD; }
ll turnOnBit(ll n, int pos) { return n | (1LL << pos); }
ll turnOffBit(ll n, int pos) { return n & ~(1LL << pos); }
bool checkBit(ll n, int pos) { return n & (1LL << pos); }

// =-=-=-=-=-=-=-=-=-=-=-=-=-code starts here -=-=-=-=-=-=-=-=-=-=-=-=-= //

void idharDekh()
{
    ll n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    ll ct = 1;
    ll ans = 0;
    ll z = m;
    ll hash[2] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[s[i] - 48]++;
    }
    if (m == 1)
    {
        cout << hash[0] << endl;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '0' && s[i - 1] == '0')
        {
            ct++;
        }
        else
        {
            if (ct >= m)
            {
                ct -= (m - 1);
                if (ct > 0)
                {
                    ans++;
                    ans = min(ans, ct / (m - 1 + k));
                }
            }
            ct = 1;
        }
    }
    // cout<<ct<<endl;
    if (ct >= m)
    {
        ans++;
        ct -= (m - 1);
        ans = min(ans, ct / (m - 1 + k));
    }
    cout << ans << endl;
}

signed main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    King T
        ll t = 1;
    cin >> t;
    while (t--)
    {
        idharDekh();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}