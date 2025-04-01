/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   16-10-2024
    Problem :   450B
    Status  :   Incomplete
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
//#define size 1000000007

int fn(int n, int x, int y)
{
    int size=1000000007;
    ll z = size;
    if (n == 1)
    {
        return (x % size);
    }
    if (n == 2)
    {
        return (y % size);
    }
    return ((fn(n - 1, x, y) % size) + (fn(n + 1, x, y) % size) % size);
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        ll x, y, n;
        cin >> x >> y >> n;
        cout << fn(n, x, y);
    }
}