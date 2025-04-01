/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   16-10-2024
    Problem :   1363A
    Status  :   Incomplete
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        int hash[2] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            hash[(a[i] % 2)]++;
        }
        if (n == x && hash[1] % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else if (x % 2 == 1 && hash[1] > 0)
        {
            cout << "YES" << endl;
        }
        else if (hash[1] == 0)
        {
            cout << "NO" << endl;
        }
        else if (hash[0] == 0 && x % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}