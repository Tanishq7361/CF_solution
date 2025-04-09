#include <bits/stdc++.h>
using namespace std;

#define King ios_base::sync_with_stdio(0);
#define T       \
    cin.tie(0); \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define int ll
#define stc static_cast
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define umll unordered_map<ll, ll>
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define bitcount __builtin_popcountll
#define ff first
#define ss second
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define one cout << "1\n"
#define mone cout << "-1\n"
#define zro cout << "0\n"
#define ent cout << endl
#define done return
#define fr(i, l, r) for (ll i = (l); i < (r); i++)
#define frr(i, r, l) for (ll i = (r - 1); i >= l; i--)
#define str(s) \
    string s;  \
    cin >> s
#define in(n) \
    ll n;     \
    cin >> n
#define inn(n, k) \
    ll n, k;      \
    cin >> n >> k
#define vin(a, n)              \
    vll a(n);                  \
    for (ll i = 0; i < n; i++) \
        cin >> a[i];
#define vout(a)           \
    for (auto x : a)      \
    {                     \
        cout << x << ' '; \
    }                     \
    cout << '\n';
#define out(a) cout << a << '\n';
#define sze(x) ll((x).size())
#define all(x) (x).begin(), (x).end()
#define srt(x) sort((x).begin(), (x).end())
#define rsrt(x) sort((x).rbegin(), (x).rend())
#define rev(x) reverse(x.begin(), x.end())
#define maxdata(v) *max_element((v).begin(), (v).end())
#define mindata(v) *min_element((v).begin(), (v).end())
#define maxid(v) max_element((v).begin(), (v).end()) - ((v).begin())
#define minid(v) min_element((v).begin(), (v).end()) - ((v).begin())
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const ll INF = 1e18 + 9;
const ll MOD = 1e9 + 7;
const ll MOD1 = 998244353;

inline ll gcd(ll a, ll b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}
inline ll lcm(ll a, ll b) { return ((a / gcd(a, b)) * b); }
inline bool isPrime(ll n)
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

void SieveOfEratosthenes(ll n)
{
    vector<bool> prim(n + 1, true);
    for (ll p = 2; p * p <= n; p++){
        if (prim[p] == true) {
            for (int j = p * p; j <= n; j += p){
                prim[j] = false;
            }
        }
    }
    for (ll p = 2; p <= n; p++){
        if (prim[p]){
            cout << p << " ";
        }
    }
}

inline ll power(ll a, ll b, ll mod = MOD)
{
    ll ans = 1;
    a %= mod;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}
inline void factorial(ll n, vector<ll> &a)
{
    a.resize(n + 1, 1);
    for (ll i = 1; i <= n; i++)
    {
        a[i] = (a[i - 1] * i) % MOD;
    }
}
inline bool isPowOfTwo(ll n) { return ((n > 0) && !(n & (n - 1))); }
inline bool isPerfectSq(ll n)
{
    if (n < 0)
        return false;
    ll sr = static_cast<ll>(sqrt(n));
    return (sr * sr == n);
}
inline bool compbyss(pair<ll, ll> a, pair<ll, ll> b) { return a.second < b.second; }
inline bool comprev(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.ff == b.ff)
    {
        return a.ss < b.ss;
    }
    else
    {
        return a.ff > b.ff;
    }
}
inline ll modadd(ll a, ll b, ll mod = MOD) { return ((a % mod + b % mod) % mod); }
inline ll modmult(ll a, ll b, ll mod = MOD) { return ((a % mod * b % mod) % mod); }
inline ll modinv(ll a, ll mod = MOD) { return power(a, mod - 2, mod); }
inline ll moddiv(ll a, ll b, ll mod = MOD) { return modmult(a, modinv(b, mod), mod); }
inline ll msbPos(ll n)
{
    if (n == 0)
    {
        return -1;
    }
    return (63 - (__builtin_clzll(n)));
}
inline ll getBit(ll n, ll pos) { return ((n >> pos) & 1); }
inline ll setBit(ll n, ll pos) { return (n | (1 << pos)); }
inline ll clearBit(ll n, ll pos) { return (n & (~(1 << pos))); }
inline ll toggleBit(ll n, ll pos) { return (n ^ (1 << pos)); }
////////////////////////////////////////////////////////////////////
struct Node   // SLL
{
    ll data;
    Node *next;
    Node() : data(0), next(NULL) {}
    Node(ll x) : data(x), next(NULL) {}
    Node(ll x, Node *next) : data(x), next(next) {}
};

struct Noder // BST and DLL
{
    ll data;
    Noder *left, *right;
    Noder(ll x) {data = x; left = right = NULL;}
};
// Node* ans=new Node();                    creating a node
// Node* a[i][j]=head;                         creating node which stores head pointer
// Node* ans=new Node(2,head->next);        creating a node with data 2 and next pointer pointing to head->next
// while(head!=NULL){head=head->next;}      traversing through linked list

// for (BST)
// Noder* root=new Noder(2);                creating a node with data 2
// root->left=new Noder(1);                 creating a node with data 1 and left pointer of root pointing to it
// root->right=new Noder(3);                creating a node with data 3 and right pointer of root pointing to it
// BST ma hamesha left child smaller and right child greater than root

void preorder(Noder* root) // preorder traversal of BST
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Noder* root) // inorder traversal of BST
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Noder* root) // postorder traversal of BST
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelorder(Noder* root) // level order traversal of BST
{
    if (root == NULL)
        return;
    queue<Noder*> q;
    q.push(root);
    while (!q.empty())
    {
        Noder* curr = q.front();
        cout << curr->data << " ";
        q.pop();
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}


void mult(ll F[2][2],ll M[2][2]){
    ll x=(F[0][0]*M[0][0]%MOD + F[0][1]*M[1][0] % MOD)%MOD;
    ll y=(F[0][0]*M[0][1]%MOD + F[0][1]*M[1][1] % MOD)%MOD;
    ll z=(F[1][0]*M[0][0]%MOD + F[1][1]*M[1][0] % MOD)%MOD;
    ll w=(F[1][0]*M[0][1]%MOD + F[1][1]*M[1][1] % MOD)%MOD;
    F[0][0]=x;
    F[0][1]=y;
    F[1][0]=z;
    F[1][1]=w;
}
void matpow(ll F[2][2],ll n){
    if(n==0 || n==1)return;
    ll M[2][2]={{1,1},{1,0}};
    matpow(F,n/2);
    mult(F,F);
    if(n%2!=0) mult(F,M);
    // in(n);
    // if(n==0){
    //     cout<<0<<endl;
    //     done;
    // }
    // ll F[2][2]={{1,1},{1,0}};
    // matpow(F,n-1);
    // cout<<F[0][0]<<endl;
}
/////////////////////////////////////////////////////////////////////////////////////////////////

void idharDekh()
{
    
}

signed main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    King T
    ll t = 1;
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