
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   05-10-2024
    Problem :   208A
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s, s2 = "";
    cin >> s;
    int ct = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            ct++;
            if (i != 0)
            {
                
                if (ct == 1)
                {
                    s2.push_back(' ');
                }
            }
            i += 2;
        }
        else
        {
            ct=0;
            s2.push_back(s[i]);
        }
    }

    cout << s2;
}