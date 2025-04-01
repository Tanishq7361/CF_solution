/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   18-10-2024
    Problem :   1985D
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
    int n, m;
    cin >> n >> m;
    char a[n][m];
    int hash[200000];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if(a[i][j]=='#'){
                hash[i]++;
                hash[j]++;
            }
        }
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