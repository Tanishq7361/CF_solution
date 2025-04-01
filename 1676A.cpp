
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   14-10-2024
    Problem :   1676A
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
        int r;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 3; i++)
        {
            r = n % 10;
            sum1 += r;
            n = n / 10;
        }
        for (int i = 0; i < 3; i++)
        {
            r = n % 10;
            sum2 += r;
            n = n / 10;
        }
        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}