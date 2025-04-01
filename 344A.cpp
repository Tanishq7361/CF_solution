
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   15-10-2024
    Problem :   344A
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    
    int ct = 1;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < t; i++)
    {
        if (a[i] != a[i - 1])
        {
            ct++;
        }
    
    }
    cout << ct<< endl;
}