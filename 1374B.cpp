/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   16-10-2024
    Problem :   1374B
    Status  :   Incomplete
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int ct1 = 0, ct2 = 0;
        while (n % 2 == 0)
        {
            n /= 2;
            ct1++;
        }
        while (n % 3 == 0)
        {
            n /= 3;
            ct2++;
        }
        if (n > 1)
        {
            cout << -1 << endl;
        }
        else if (ct1 > ct2)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ct2 + ct2 - ct1 << endl;
        }
    }
}