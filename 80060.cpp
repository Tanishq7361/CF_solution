
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   13-10-2024
    Problem :   1931A
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
        int n;
        cin >> n;
        char c, d, e;
        if (n < 28)
        {
            cout << "a" << "a" << char(96 + n - 2) << endl;
        }
        else if (n >= 28 && n < 53)
        {
            cout <<"a"<< char(96 + n - 27) << "z" << endl;
        }
        else
        {
            cout << char(96 + n - 52) << "z" << "z" << endl;
        }
    }
}