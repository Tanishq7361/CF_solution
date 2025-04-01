
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   08-10-2024
    Problem :   1807A
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
        int a, b, c;
        cin >> a >> b >> c;
        if (c == a + b)
        {
            cout << "+" << endl;
        }
        else
        {
            cout << "-" << endl;
        }
    }
}