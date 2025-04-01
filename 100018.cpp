/*
    DATE    :   23-09-2024
    Problem :   2014A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k % 2 != 0 && n % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if ((k % 2 != 0 && n % 2 != 0) && (k > 1))
        {
            cout << "YES" << endl;
        }
        else if (k % 4 == 0 && n % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}