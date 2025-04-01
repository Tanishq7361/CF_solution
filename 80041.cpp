
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   12-10-2024
    Problem :   1997A
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        char a;
        int j = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                j = i;
                if (s[i] != 'z')
                {
                    a = s[i] + 1;
                }
                else
                {
                    a = s[i] - 1;
                }

                break;
            }
        }

        if (j == -1)
        {
            if (s[0] != 'z')
            {
                a = s[0] + 1;
            }
            else
            {
                a = s[0] - 1;
            }
            cout << a << s;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << s[i];
                if (i == j)
                {
                    cout << a;
                }
            }
        }
        cout << endl;
    }
}