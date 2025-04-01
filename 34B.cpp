
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   16-10-2024
    Problem :   34B
    Status  :   Incomplete
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < m; i++)
    {
        if (a[i] < 0)
        {
            sum -= a[i];
        }
    }
    cout << sum << endl;
}