/*
    DATE    :   03-10-2024
    Problem :   318A
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    ll n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << 2 * k - 1;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2;
    }
}