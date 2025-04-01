
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   14-10-2024
    Problem :   112A
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int compare(string s1, string s2, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (s1[i] > s2[i])
        {
            return 1;
        }
        else if (s1[i] < s2[i])
        {
            return -1;
        }
    }
    return 0;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] < 96)
        {
            s1[i] += 32;
        }
    }
    for (int i = 0; i < s1.size(); i++)
    {
        if (s2[i] < 96)
        {
            s2[i] += 32;
        }
    }
    cout << compare(s1, s2, n);
}