/*
    Coded By : Tanishq Shah
    Created : 05.02.2025  16:23:43
    Problem : 2062C
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
    ll n;
    cin >> n;
    vll a(n);
    ll ans=0;
    fr(i, 0, n){ 
        cin >> a[i];
        ans+=a[i];
    }
    
    while(a.size() > 1){
        ll sum=0;
        ll z=a.size();
        fr(i,0,z-1){
            a[i]=a[i+1]-a[i];
        }
        a.ppb();
        fr(i,0,z-1){
            sum+=a[i];
        }
        ans=max(ans,abs(sum));
    }
    cout<<ans<<endl;
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