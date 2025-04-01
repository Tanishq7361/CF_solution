/*  AUTHOR  :   Tanishq Shah
    DATE    :   29-08-2024
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;
    int a[n];
    int hsh[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hsh[a[i]]++;
    }
    if (n == 1)
    {
        cout << "YES";
    }
    else
    {
        int ct = 0;
        for (int i = 1; i <= 1000; i++)
        {
            if (hsh[i] > (n+1) / 2)
            {
                cout<<hsh[i];
                cout << "NO";
                break;
            }
        }
    }
}