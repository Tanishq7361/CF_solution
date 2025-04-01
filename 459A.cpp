/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   16-10-2024
    Problem :   459A
    Status  :   completed
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int l = max(abs(x2 - x1), abs(y2 - y1));
        // cout << x1 + l;
        if (x1 == x2)
        {
            cout << x1 + l << " " << y1 << " " << x2 + l << " " << y2 << endl;
        }
        if (y1 == y2)
        {
            cout << x1 << " " << y1 + l << " " << x2 << " " << y2 + l << endl;
        }
        if (x1 != x2 && y1 != y2)
        {

            if (abs(x1 - x2) == abs(y1 - y2))
            {
                cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}