
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   14-10-2024
    Problem :   1692A
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
        int a, b, c, d, ct = 3;
        cin >> a >> b >> c >> d;
        if (a > b)
        {
            ct--;
        }
        if (a > c)
        {
            ct--;
        }
        if (a > d)
        {
            ct--;
        }
        cout << ct << endl;
    }
}