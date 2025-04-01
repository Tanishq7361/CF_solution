/*
    Coded By : Tanishq Shah
    Created : 19.01.2025  19:11:46
    Problem : 1744D
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
    ll n;
    cin >> n;
    ll z=n;
    vll a(n);
    ll ct = 0;
    ll ans = 0;
    fr(i, 0, n)
    {
        cin >> a[i];
        while (a[i] % 2 == 0)
        {
            a[i] /= 2;
            ct++;
        }
        ans+=ct;
        ct=0;
    }
    //cout<<ans<<endl;
    if(ans>=n){
        cout<<0<<endl;
        done;
    }
    ll set=0;
    while(n>1){
        n/=2;
        set++;
    }
    //cout<<set<<endl;
    ll m=pow(2,set);
    ll y=m;
    umll mpp;
    mpp[m]=1*set;
    set--;
    //cout<<m<<endl;
    m/=2;
    ct=0;
    while(m!=1){
        mpp[m]=((z/m) - (mpp[m*2]/(set+1)))*set;
        set--;
        m/=2;
    }
    // cout<<mpp[y]<<endl;
    // cout<<mpp[y/2]<<endl;
    // cout<<mpp.size()<<endl;;
    for(int i=y;i>1;i/=2){
        ans+=mpp[i];
        ct++;
        if(ans>=z){
            cout<<ct<<endl;
            done;
        }
    }
    one;    
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