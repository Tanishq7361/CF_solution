/*
    DATE    :   03-10-2024
    Problem :   58A
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    string s2 = "hello";
    cin >> s;
    int j = 0, ct = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (ct == 5)
        {
            break;
        }
        if (s[i] == s2[j])
        {
            ct++;
            j++;
        }
    }
    if (ct == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}