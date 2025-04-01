/*
    DATE    :   03-10-2024
    Problem :   2020A
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int rem = 0;
        if (k == 1)
        {
            cout << n << endl;
        }
        else
        {
            while (n > 0)
            {
                rem += n % k;
                n = n / k;
            }
            cout << rem << endl;
        }
    }
}