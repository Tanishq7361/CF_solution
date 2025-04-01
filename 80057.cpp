
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   13-10-2024
    Problem :   1919B
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '+')
            {
                sum++;
            }
            else
            {
                sum--;
            }
        }
        cout << abs(sum) << endl;
    }
}