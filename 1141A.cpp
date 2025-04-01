/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   17-10-2024
    Problem :   1141A
    Status  :   completed
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define v vector
#define M 1000000007

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int y = m % n;
        int z = m / n;
        int ct = 0;
        if (y == 0)
        {
            if (z % 3 == 0 || z % 2 == 0)
            {
                while (z % 2 == 0)
                {
                    z = z / 2;
                    ct++;
                }
                while (z % 3 == 0)
                {
                    z = z / 3;
                    ct++;
                }
                if (z == 1)
                {
                    cout << ct << endl;
                }
                else{
                    cout<<-1<<endl;
                }
            }
            else if (z == 1)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}