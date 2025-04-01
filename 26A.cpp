/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   18-10-2024
    Problem :   26A
    Status  :   completed
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define v vector
#define M 1000000007
int ct = 0;
int prime(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2 || n == 3)
    {
        return 1;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void solve()
{
    int n;
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0 && prime(i))
            {
                ct++;
            }
            cout << ct << endl;
        }
    }
    cout << ct << endl;
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