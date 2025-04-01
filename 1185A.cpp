/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   18-10-2024
    Problem :   1185A
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = a + b + c, sum2 = 0;
    int x = max(a, max(b, c));
    int y = min(a, min(b, c));
    int z = sum - x - y;

    if (z - y < d)
    {
        sum2 += d - z + y;
        //cout << sum2 << endl;
    }

    if (x - z < d)
    {
        sum2 += d - x + z;
    }

    cout << sum2 << endl;
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}