/////////////////////////////////////////////////////////////////////////////////////////

/*
*********      *            *     *  *******
    *         * *          * *   *      *
    *        *   *        *  *  *       *
    *       *  *  *      *   * *        *
    *      *       *    *    *       *******


*/
/*
    DATE    :   17-10-2024
    Problem :   742A
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
    ll n;
    cin >> n;
    ll r = n % 4;
    if(n==0){
        cout<<1<<endl;
    }
    else if (r == 0)
    {
        cout << 6 << endl;
    }
    else if (r == 1)
    {
        cout << 8 << endl;
    }
    else if (r == 2)
    {
        cout << 4 << endl;
    }
    else if (r == 3)
    {
        cout << 2 << endl;
    }
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}