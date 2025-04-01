/*
    DATE    :   03-10-2024
    Problem :   230B
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int prime(int n)
{
    int ct = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ct++;
        }
        if (ct > 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll x = sqrtl(n);
        ll y = x * x;

        if (n == 1)
        {
            cout << "NO" << endl;
        }

        else if ((y == n) && (prime(x)))
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}