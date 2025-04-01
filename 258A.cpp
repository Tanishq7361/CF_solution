/*
    Code By : Tanishq Shah
    Created : 03.01.2025  16:25:09
    Problem : 258A
*/

#include <bits/stdc++.h>
using namespace std;

//------all short forms below --------//

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

//----- all imp const integers for use -----//

const long long INF = 1e18 + 9;
const int MOD = 1e9 + 7;
const long long MOD1 = 989844166;

//----- some function to use direct -----//

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
bool angstorm(ll n)
{
    ll z = n;
    ll digit = (int)(log10(n) + 1);
    ll sum = 0;
    while (z > 0)
    {
        ll r = z % 10;
        for (int i = 1; i < digit; i++)
        {
            r *= (z % 10);
        }
        sum += r;
        z /= 10;
    }
    if (sum == n)
    {
        return true;
    }
    return false;
}

// =-=-=-=-=-=-=-=-=-=-=-=-=-code starts here -=-=-=-=-=-=-=-=-=-=-=-=-= //

void idharDekh()
{
    string s;
    cin>>s;
    bool yeah=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0' && yeah){
            yeah=false;
        }
        else if(i==s.size()-1 && yeah){
            yeah=false;
        }
        else{
            cout<<s[i];
        }
    }
    done;
}

signed main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    King(T);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        idharDekh();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}