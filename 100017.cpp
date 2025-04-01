/*
    DATE    :   15-09-2024
    Problem :   1327A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k*k>n)
        {
            cout << "NO" << endl;
        }
       else if ((n % 2) == (k % 2))
        {
            cout << "YES" << endl;
        }
        else if (n % 2 != k % 2)
        {
            cout << "NO" << endl;
        }
        
    }
}