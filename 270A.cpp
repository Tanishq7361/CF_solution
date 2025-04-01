/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   18-10-2024
    Problem :   270A
    Status  :   completed
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define v vector
#define M 1000000007

void solve()
{
    int a;
    cin >> a;

    if (360 % (180 - a) == 0)
    {
        for (int i = 3; i < 720; i++)
        {
            if (i == (360 / (180 - a)))
            {
                cout << "YES" << endl;
                break;
            }
            if (i == 719)
            {
                cout << "NO" << endl;
                break;
            }
        }
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}