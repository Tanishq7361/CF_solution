#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, s, z, n;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        s = a % b;
        n = b - s;
        if (n >= s)
        {
            cout << s;
        }
        else
        {
            cout << n;
        }
    }
    if (n >= s)
        {
            cout << s;
        }
        else
        {
            cout << n;
        }
}