
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   14-10-2024
    Problem :   1560A
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    vector<int> v;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int tot = 0;
        for (int i = 1; i < 20000; i++)
        {
            if (i % 3 != 0 && i % 10 != 3)
            {
                tot++;
            }
            if (tot == n)
            {
                cout << i << endl;
                break;
            }
        }
    }
}