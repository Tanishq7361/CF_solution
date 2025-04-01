
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   16-10-2024
    Problem :   337A
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;
    int a[m];
    set<int> st;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    int tot = m - n;
    //cout << a[tot] << endl;
    int min1 = a[m - 1] - a[0];
    // cout << min1 << endl;
    // cout << a[0] << endl;
    // cout << a[m - 1] << endl;

    int l = tot, r = m - 1;
    while (l >= 0)
    {
        int z = a[r] - a[l];
        min1 = min(z, min1);
        l--;
        r--;
    }
    cout << min1 << endl;
}