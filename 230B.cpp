/*
    DATE    :   03-10-2024
    Problem :   230B
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPrime(int n)
{
    if (n < 2)
        {return false;}
    else if (n < 4)
        {return true;}
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
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
        
        if ((x*x == n) && (isPrime(x)))
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}