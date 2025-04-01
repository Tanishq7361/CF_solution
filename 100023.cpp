
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   14-10-2024
    Problem :   1418A
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, k, s, z;
        cin >> x >> y >> k;

        s = (k * (x + y) - 1);
        z = s / (x - 1);
        if (s % (x - 1) == 0)
        {
            cout << z << endl;
        }
        else
        {
            cout << z + 1 << endl;
        }

        
        // while (c != k || s < k)
        // {
        //     if (s > y && c < k)
        //     {
        //         s -= y;
        //         c++;
        //     }
        //     s += x - 1;
        //     ct++;
        // }
        // cout << ct + k << endl;
    }
}
