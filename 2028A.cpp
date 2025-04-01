/*
    Code By : Tanishq Shah
    Date : 19-11-2024
    Problem : 2028A
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
    ll n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    ll netx = 0, nety = 0;
    ll hash[10] = {0};
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'N')
        {
            hash[1]++;
        }
        if (s[i] == 'W')
        {
            hash[2]++;
        }
        if (s[i] == 'E')
        {
            hash[3]++;
        }
        if (s[i] == 'S')
        {
            hash[4]++;
        }
    }

    while (netx <= 20 && nety <= 20 && netx >= -10 && nety >= -10)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'N')
            {
                nety += 1;
            }
            if (s[i] == 'E')
            {
                netx += 1;
            }
            if (s[i] == 'W')
            {
                netx -= 1;
            }
            if (s[i] == 'S')
            {
                nety -= 1;
            }
            if (netx == a && nety == b)
            {
                cout << "YES" << endl;
                return;
            }
        }
        if (hash[1] == hash[4] && hash[2] == hash[3])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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
