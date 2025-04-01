
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   14-10-2024
    Problem :   116A
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    int sum = 0, max1 = 0;
    while (t--)
    {
        int c, d;
        cin >> c >> d;
        sum -= c;
        sum += d;
        max1 = max(sum, max1);
    }
    cout << max1 << endl;
}