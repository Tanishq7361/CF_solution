/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   16-10-2024
    Problem :   320A
    Status  :   Incomplete
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        string s;
        cin >> s;
        int ct = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[0] == '4')
            {
                cout << "NO" << endl;
                break;
            }

            if (s[i] != '1' && s[i] != '4')
            {
                cout << "NO" << endl;
                break;
            }
            else if (s[i] == '4' && s[i + 1] == '4' && s[i + 2] == '4')
            {
                cout << "NO" << endl;
                break;
            }
            if (i == s.size() - 1)
            {
                cout << "YES" << endl;
            }
            ct++;
            // cout<<ct;
        }
    }
}