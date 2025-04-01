#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a, b, c, d;
    cin >> t;
    while (t--)

    {
        int s = 0, k = 0;
        cin >> a >> b >> c >> d;
        for (int i = (min(a, b)); i <= max(a, b); i++)
        {
            if (i == c || i == d)
            {
                s++;
            }
        }
        for (int i = (min(c, d)); i <= max(c, d); i++)
        {
            if (i == a || i == b)
            {
                k++;
            }
        }

        if (s == 1 && k == 1)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
}