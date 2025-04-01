/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   18-10-2024
    Problem :   1980A
    Status  :   completed
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define v vector
#define M 1000000007

void solve()
{
    int n, m;
    cin >> n >> m;
    int hash[7] = {0};
    int sum = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 65]++;
    }

    // cout<<'A'-65<<endl;
    for (int i = 0; i < 7; i++)
    {
        if (hash[i] < m)
        {
            sum += m - hash[i];
        }
    }
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}