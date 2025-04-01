
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   13-10-2024
    Problem :   1999B
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
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        // if (max(a1, a2) < min(b1, b2))
        // {
        //     cout << 0 << endl;
        // }
        // else if (max(b1, b2) > max(a1, a2))
        // {
        //     cout << 0 << endl;
        // }
        // else if (min(b1, b2) > min(a1, a2))
        // {
        //     cout << 0 << endl;
        // }

        // else if (min(a1, a2) > max(b1, b2))
        // {
        //     cout << 4 << endl;
        // }
        // else if (max(a1,a2)>max(b1,b2) && min(a1,a2)>min(b1,b2))
        // {
        // }
        int a, b, c, d, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
        a = a1 - b1;
        b = a1 - b2;
        c = a2 - b1;
        d = a2 - b2;
        if (a > 0)
        {
            if (d > 0)
            {
                sum1 += 2;
            }
            else if (d == 0)
            {
                sum1 += 2;
            }
        }
        else if (a == 0)
        {
            if (d > 0)
            {
                sum1 += 2;
            }
        }
        else
        {
            
        }
        if (b > 0)
        {
            if (c > 0)
            {
                sum1 += 2;
            }
            else if (c == 0)
            {
                sum1 += 2;
            }
        }
        else if (b == 0)
        {
            if (c > 0)
            {
                sum1 += 2;
            }
        }
        else
        {
            
        }

        cout<<sum1<<endl;
    }
}