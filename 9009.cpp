
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   14-10-2024
    Problem :   11A
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, d;
    cin >> n >> d;
    int a[n], b[n];
    ll ct = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] <= a[i - 1])
        {
            ct += ((a[i - 1] - a[i]) / d) + 1;
            a[i] += (((a[i - 1] - a[i]) / d) + 1) * d;
        }
    }
    cout << ct << endl;
}