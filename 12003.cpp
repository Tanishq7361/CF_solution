
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   13-10-2024
    Problem :   1363A
    Status  :   Incomplete
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
        int n, x;
        cin >> n >> x;
        int a[n];
        int ct2 = 0, ct1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                ct2++;
            }
            else
            {
                ct1++;
            }
        }
        if (x % 2 == 1)
        {
            if (ct1 > 0 && ct1%2!=0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            if (ct1 > x && ct2 > 0)
            {
                cout << "Yes" << endl;
            }
            else if (ct2 == 0)
            {
                cout << "No" << endl;
            }
            else if (ct1 == 0)
            {
                cout << "No" << endl;
            }
        }
    }
}