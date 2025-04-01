#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (a * m <= b)
    {
        cout << a * n;
    }
    else
    {
        if ((((n / m) * b) + a * (n % m)) > ((n / m) + 1) * b)
        {
            cout << ((n / m) + 1) * b;
        }
        else
        {
            cout << (((n / m) * b) + a * (n % m));
        }
    }
}