
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   14-10-2024
    Problem :   1327A
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
        ll n, k;
        cin >> n >> k;
        ll z = sqrt(n);
        if (n % 2 != k % 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (z >= k)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}