/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   18-10-2024
    Problem :   2002A
    Status  :   completed
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define v vector
#define M 1000000007

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    if (k == 1)
    {
        cout << 1 << endl;
    }
    else if (k >= max(n, m))
    {
        cout << n * m << endl;
    }
    else if(k<=min(m,n))
    {
        cout<<k*k<<endl;        
    }
    else if(k>=n && k<=m){
        cout<<n*k<<endl;
    }
    else if(k>=m && k<=n){
        cout<<m*k<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}