
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   09-10-2024
    Problem :   11B
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll y;
    cin >> y;
    ll x = abs(y);
    ll c = 1;
    ll n = 0, ct = 0;

    while (n < x || (n-x)%2!=0)//(** (n-x) khatarnakh , ultra level**)
    {

        n += c;
        c++;
        ct++;
    }
    // cout << ct << endl;
    // cout << n-x << endl;
    // cout << c << endl;
    if ((n - x) % 2 == 0)
    {
        cout << ct;
    }
    else
    {
        cout << ct + 1;
    }
    
}