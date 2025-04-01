
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   08-10-2024
    Problem :   1669 A
    Status  :   Completed
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
        if (n >= 1900)
            cout << "Division 1" << endl;
        if (n < 1900 && n >= 1600)
            cout << "Division 2" << endl;
        if (n < 1600 && n >= 1400)
            cout << "Division 3" << endl;
        if (n < 1400)
            cout << "Division 4" << endl;
    }
}