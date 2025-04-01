/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   18-10-2024
    Problem :   123
    Status  :   completed
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define v vector
#define M 1000000007

ll fib(ll n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

void solve()
{
    int n, f1 = 1, f2 = 1;
    cin >> n;

    if (n == 1 || n == 2)
    {
        cout << n;
    }
    else
    {
        int fn, sum = 2;
        for (int i = 3; i <=n; i++)
        {
            fn = f1 + f2;
            sum += fn;
            f1 = f2;
            f2 = fn;
        }
        cout << sum << endl;
    }
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