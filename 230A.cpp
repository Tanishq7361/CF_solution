/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   16-10-2024
    Problem :   230A
    Status  :   Incomplete
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n, s, a, b;
        cin >> s >> n;

        vector<pair<int, int>> v1;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            v1.pb({a, b});
        }
        sort(v1.begin(), v1.end());
        for (int i = 0; i < n; i++)
        {
            if (v1[i].first >= s)
            {
                cout << "NO" << endl;
                break;
            }
            else
            {
                s += v1[i].second;
            }
            if (i == n - 1)
            {
                cout << "YES" << endl;
                break;
            }
        }
    }
}