
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   14-10-2024
    Problem :   110A
    Status  :   Incomplete
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    int r, ct = 0;
    while (n > 0)
    {
        r = n % 10;
        n /= 10;
        if (r == 4 || r == 7)
        {
            ct++;
        }
    }
    if (ct == 4 || ct == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}