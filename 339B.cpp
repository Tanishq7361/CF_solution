
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   14-10-2024
    Problem :   339B
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;
    ll a[m], sum = -1;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sum += a[0];
    for (int i = 1; i < m; i++)
    {
        if (a[i] >= a[i - 1])
        {
            sum += a[i] - a[i - 1];
        }
        else
        {
            sum += a[i] + n - a[i - 1];
        }
    }
    cout << sum << endl;
}