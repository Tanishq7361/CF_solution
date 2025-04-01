/*
    Code By : Tanishq Shah
    Created : 01.01.2025  15:18:35 
    Problem : 1836B
*/

// --- To see code scroll down --- //


#include <bits/stdc++.h>
using namespace std;

//------all short forms below --------//

#define King(T)                   \
    ios ::sync_with_stdio(false); \
    cin.tie(nullptr)
#define endl '\n'
#define ll long long
#define u unsigned 
#define stc static_cast
#define uo unordered
#define fr(i, l, r) for(ll i=(l); i<(r); i++)
#define frr(i, l, r) for(ll i=(l); i>=(r); i--)
#define V vector
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mii map<int, int>
#define mll map<long long, long long>
#define umll unordered_map<long long,long long>
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
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
#define done cout <<endl

//----- all imp const integers for use -----//
const long long INF = 1e18 + 9;
const int MOD = 1e9 + 7;
const long long MOD1 = 989844166;

//----- some function to use direct -----//


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
bool isPowOfTwo(ll n) { return n > 0 && (n & (n-1)) == 0; }
bool isPerfectSq(ll n) { if(n < 0) return false; ll sr = stc<int>(sqrt(n)); return (sr*sr == n); }
bool cmpBySs(const pair<int, int>& a, const pair<int, int>& b) { return a.second < b.second; }
ll modSum(ll a, ll b) { return (a % MOD + b % MOD) % MOD; }
ll modSub(ll a, ll b) { return ((a % MOD - b % MOD) + MOD) % MOD; }
ll modMult(ll a, ll b) { return (a % MOD * b % MOD) % MOD; }
ll turnOnBit(ll n, int pos) { return n | (1LL << pos); }
ll turnOffBit(ll n, int pos) { return n & ~(1LL << pos); }
bool checkBit(ll n, int pos) { return n & (1LL << pos); }
bool angstorm(ll n){
ll z=n;
ll digit=(int)(log10(n)+1);
ll sum=0;
while(z>0){
    ll r=z%10;
    for(int i=1;i<digit;i++){
       r*=(z%10);
    }
    sum+=r;
    z/=10;
}
if(sum==n){return true;}
return false;
}

// -------------code starts here ------------- //

void idharDekh(){
   cout<<(8^9);
}


signed main(){
    King(T);
    int t = 1;
    cin >> t;
    while (t--){idharDekh();}
    return 0;
}
