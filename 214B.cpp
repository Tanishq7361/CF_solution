/*
    Code By : Tanishq Shah
    Created : 11.01.2025  22:17:52
    Problem : 214B
*/

#include <bits/stdc++.h>
using namespace std;

#define King(T)                   \
    ios ::sync_with_stdio(false); \
    cin.tie(nullptr)
#define endl '\n'
#define ll long long
#define stc static_cast
#define fr(i, l, r) for (ll i = (l); i < (r); i++)
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
#define done cout << endl
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
bool isPowOfTwo(ll n) { return n > 0 && (n & (n - 1)) == 0; }
bool isPerfectSq(ll n)
{
    if (n < 0)
        return false;
    ll sr = stc<int>(sqrt(n));
    return (sr * sr == n);
}

// =-=-=-=-=-=-=-=-=-=-=-=-=-code starts here -=-=-=-=-=-=-=-=-=-=-=-=-= //

void idharDekh()
{
    ll n;
    cin >> n;
    vll a(n);
    ll sum = 0;
    vll onee;
    vll two;
    vll zero;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 3 == 0)
        {
            zero.pb(a[i]);
        }
        if (a[i] % 3 == 1)
        {
            onee.pb(a[i]);
        }
        if (a[i] % 3 == 2)
        {
            two.pb(a[i]);
        }
    }
    srt(a);
    srt(onee);
    srt(two);
    reverse(a.begin(), a.end());
    reverse(onee.begin(), onee.end());
    reverse(two.begin(), two.end());
    if (a[n - 1] != 0)
    {
        one;
    }
    else if (sum % 3 == 0)
    {
        if(a[0]==a[n-1] && a[n-1]==0){
            cout<<0<<endl;
            return;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
    }
    else
    {
        if (sum % 3 == 1)
        {
            if (onee.size() > 0)
            {
                for (int i = 0; i < onee.size() - 1; i++)
                {
                    zero.pb(onee[i]);
                }
                for (int i = 0; i < two.size(); i++)
                {
                    zero.pb(two[i]);
                }
            }
            else
            {
                if (two.size() <= 1)
                {
                    one;
                    return;
                }
                for (int i = 0; i < two.size() - 2; i++)
                {
                    zero.pb(two[i]);
                }
            }
        }
        else if (sum % 3 == 2)
        {
            if (two.size() > 0)
            {
                for (int i = 0; i < two.size() - 1; i++)
                {
                    zero.pb(two[i]);
                }
                for (int i = 0; i < onee.size(); i++)
                {
                    zero.pb(onee[i]);
                }
            }
            else
            {
                if (onee.size() <= 1)
                {
                    one;
                    return;
                }
                for (int i = 0; i < onee.size() - 2; i++)
                {
                    zero.pb(onee[i]);
                }
            }
        }
        srt(zero);
        if(zero[0]==zero[zero.size()-1] && zero[0]==0){
            cout<<0<<endl;
            return;
        }
        for(int i=zero.size()-1;i>=0;i--){
            cout<<zero[i];
        }
    }
    done;
}

signed main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    King(T);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        idharDekh();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}