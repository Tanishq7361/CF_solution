/*
    Code By : Tanishq Shah
    Created : 12.01.2025  12:19:29
    Problem : 451B
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
    cin>>n;
    vll a(n);
    ll less=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            less=i-1;
            break;
        }
    }
    if(less==-1){
        cout<<"yes"<<endl;
        cout<<1<<' '<<1<<endl;
        return;
    }
    ll min1=n-1;
    for(int i=less;i<n-1;i++){
        if(a[i+1]>a[i]){
            min1=i;
            break;
        }
    }
    reverse(a.begin()+less,a.begin()+min1+1);
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;
    cout<<less+1<<' '<<min1+1<<endl;
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