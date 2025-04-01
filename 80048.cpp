
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   13-10-2024
    Problem :   2014B
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        
        if (n % 2)
        {
            if (k % 2)
            {
                if (k % 4 == 1)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
            else
            {
                if (k % 4 == 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        else
        {
            if (k % 2)
            {
                if (k % 4 == 3)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
            else
            {
                if (k % 4 == 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}