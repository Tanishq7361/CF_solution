
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   16-10-2024
    Problem :   25A
    Status  :   Incomplete
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int a[n];
    int odd = 0, even = 0;
    int ct1 = 0, ct2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            ct1++;
            odd = i+1;
        }
        else
        {
            ct2++;
            even = i+1;
        }
       // cout << ct1 << ct2<<endl;

    }
    if (ct1 == 1)
    {
        cout << odd << endl;
    }

    else
    {
        cout << even << endl;
    }
    //cout << ct1 << ct2;
}