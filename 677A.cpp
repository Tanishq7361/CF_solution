
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   14-10-2024
    Problem :   677A
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, h;
    cin >> n >> h;
    int ct = n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > h)
        {
            ct++;
        }
    }
    cout << ct << endl;
}