/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   18-10-2024
    Problem :
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
    int n;
    cin >> n;
    v<int> v1(n);
    ll sum = 0;
    for (auto &i : v1)
    {
        cin >> i;
    }
    if (n == 2 && v1[0] == v1[1])
    {
        cout << "NO" << endl;
    }

    else
    {
        for (auto k : v1)
        {
            if (k == sum)
            {
                break;
            }
            sum += k;
        }
        cout<<"YES"<<endl;
        cout << v1[n - 1] << " ";
        for (int j = 0; j < n - 1; j++)
        {
            cout << v1[j] << " ";
        }
        cout << endl;
    }
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