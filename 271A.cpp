
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   14-10-2024
    Problem :   271A
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int same(int n)
{
    int ct = 0;
    int hash[10] = {0};
    int r;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        hash[r]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (hash[i] > 0)
        {
            ct++;
        }
    }
    return ct;
}

int main()
{
    int n;
    cin >> n;
    int m = n;
    int r;
    int hash[10] = {0};
    while (1)
    {
        n++;
        if (same(n) == 4)
        {
            cout << n << endl;
            break;
        }
    }
}