#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, a;
    cin >> n >> m >> a;

    if (n % a == 0 && m % a == 0)
    {
        cout << (n * m) / (a * a);
    }
    else if (n % a != 0 && m % a == 0)
    {
        cout << ((n / a) + 1) * (m / a);
    }
    else if (n % a == 0 && m % a != 0)
    {
        cout << ((m / a) + 1) * (n / a);
    }
    else
    {
        cout << ((m / a) + 1) * ((n / a) + 1);
    }
}
