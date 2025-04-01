
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   12-10-2024
    Problem :   1352A
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
        int m = n;
        int ct = 0;
        while (n > 0)
        {
            if (n % 10 != 0)
            {
                ct++;
            }
            n /= 10;
        }
        cout << ct<<endl;
        int ct2 = 0;
        while (m > 0)
        {
            if (m % 10 !=0)
            {

                cout << (m % 10) * (pow(10, ct2))<<" ";
                
            }
            ct2++;
            m/=10;
        }
    }
}