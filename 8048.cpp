
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   08-10-2024
    Problem :   112A
    Status  :   Incomplete
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int sum1 = 0, sum2 = 0;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] <= 'Z' && s1[i] >= 'A')
        {
            s1[i] += 32;
        }
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] <= 'Z' && s2[i] >= 'A')
        {
            s2[i] += 32;
        }
    }
    for (int i = 0; i < s1.size(); i++)
    {
        sum1 += s1[i];
    }
    for (int i = 0; i < s2.size(); i++)
    {
        sum2 += s2[i];
    }
    if (sum1 == sum2)
    {
        cout << 0;
    }
    else if (sum1 > sum2)
    {
        cout << 1;
    }
    else if (sum2 > sum1)
    {
        cout << -1;
    }
}