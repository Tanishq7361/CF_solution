/*
    DATE    :   23-09-2024
    Problem :   2014A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, sum = 0, ct = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0 && sum > 0)
            {
                ct++;
                sum-=1;
            }
            else if (a[i] != 0 && a[i] >= k)
            {
                sum += a[i];
            }
        }
        cout << ct << endl;
    }
}