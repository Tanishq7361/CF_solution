
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   14-10-2024
    Problem :   580A
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ct = 1;
    int max1 = 1;
    if (n > 1)
    {
        for (int i = 0; i < n-1; i++)
        {
            if (a[i] <= a[i + 1])
            {
                ct++;
            }
            else
            {
                ct = 1;
            }
            max1 = max(ct, max1);
        }
    }
    cout << max1 << endl;
}