/*
    Coded By : Tanishq Shah
    Created : 18.02.2025  20:00:22
    Problem : 2069B
*/

#include <bits/stdc++.h>
using namespace std;

#define King ios_base::sync_with_stdio(0);
#define T cin.tie(0); cout.tie(0);
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
#define rev(x) reverse(x.begin(),x.end())
#define maxnum(v) *max_numment(v.begin(), v.end())
#define minnum(v) *min_numment(v.begin(), v.end())
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
#define fr(i, l, r) for(ll i=(l); i<(r); i++)
#define frr(i, r, l) for(ll i=(r-1); i>=l; i--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const long long INF = 1e18 + 9;
const int MOD = 1e9 + 7;
const long long MOD1 = 998244353;

ll gcd(ll a, ll b) { return (b == 0) ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
bool isPrime(ll n) {
    if(n <= 1) return false; if(n <= 3) return true; if(n % 2 == 0 || n % 3 == 0) return false;
    for(ll i=5; i*i<=n; i+=6) { if(n % i == 0 || n % (i+2) == 0) return false;}
    return true;
}
ll power(ll a, ll b) {
    ll ans = 1; a %= MOD;
    while(b > 0) { if(b & 1) { ans = (ans * a) % MOD; } a = (a * a) % MOD; b >>= 1; }
    return ans;
}
bool compbyss(const pair<int, int>& a, const pair<int, int>& b) { if(a.second == b.second) { return a.first < b.first; } return a.second < b.second; }


// =-=-=-=-=-=-=-=-=-=-=-=-=-code starts here -=-=-=-=-=-=-=-=-=-=-=-=-= //

void idharDekh()
{
    ll n, m;
    cin >> n >> m;
    ll a[n][m];

    for (ll i = 0; i < n; i++)
    {
       for (ll j = 0; j < m; j++)
       {
          cin >> a[i][j];
       }
    }
    umll mpp;
    fr(i,0,n-1){
        fr(j,0,m-1){
            if(a[i+1][j]==a[i][j] || a[i][j+1]==a[i][j]){
                mpp[a[i][j]]=2;
            }
            else{
                if(mpp[a[i][j]]!=2){
                    mpp[a[i][j]]=1;
                }
            }
        }
    }
    ll ans=1;
    ll sum=0;
    for(auto i:mpp){
        ans=max(ans,i.ss);
        sum+=i.ss;
    }
    sum-=ans;
    cout<<sum<<endl;
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