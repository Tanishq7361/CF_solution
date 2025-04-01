
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   13-10-2024
    Problem :   1473B
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int lcm(int n, int m)
{
    int c = n, d = m;

    while (n != 0 && m != 0)
    {
        if (n > m)
        {
            n %= m;
        }
        else
        {
            m %= n;
        }
    }
    if (n == 0)
    {
        return (c * d) / m;
    }
    else
    {
        return (c * d) / n;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, s2 = "", t, t2 = "";
        cin >> s >> t;
        int sum = 0, sum2 = 0;
        int n = s.size();
        int m = t.size();
        int z = lcm(n, m);
        int a, b;
        a = z / n;
        b = z / m;
        while (a--)
        {
            s2 += s;
        }
        while (b--)
        {
            t2 += t;
        }
        if (s2 == t2)
        {
            cout << s2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}