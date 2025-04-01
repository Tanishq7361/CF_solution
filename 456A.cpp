
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   18-10-2024
    Problem :   456A
    Status  :   complete
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v1(n);
    for (auto &i : v1)
    {
        cin >> i.first >> i.second;
    }
    sort(v1.begin(), v1.end());
    for (int i = 0; i < n - 1; ++i)
    {
        if (v1[i].second > v1[i + 1].second)
        {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
}
