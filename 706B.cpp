/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   17-10-2024
    Problem :   706B
    Status  :   completed
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
        int n;
        cin >> n;
        vector<int> v1(n);
        for (auto &i : v1)
        {
            cin >> i;
        }
        sort(v1.begin(), v1.end());

        int q;
        cin >> q;
        vector<int> v2(q);
        for (auto &j : v2)
        {
            cin >> j;
        }
        for (int k = 0; k < q; k++)
        {
            int l = 0, r = n, mid;

            while (l < r)
            {
                mid = (l + r) / 2;
                if (v1[mid] <= v2[k])
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid;
                }
            }
            cout << l << endl;
        }
    }
}