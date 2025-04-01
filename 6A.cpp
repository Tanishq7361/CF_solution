/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   18-10-2024
    Problem :   6A
    Status  :   completed
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define v vector
#define M 1000000007

void triangle(int n, int m, int r, int ct)
{
    if (((n + m) > r) && ((m + r) > n) && ((r + n) > m))
    {
        ct++;
    }
    if (ct > 0)
    {
        cout << "TRIANGLE" << endl;
    }
}
void segment(int n, int m, int r, int ct2)
{
    if ((n + m == r) || (m + r == n) || (r + n == m))
    {
        ct2++;
    }
    if (ct2 > 0)
    {
        cout << "SEGMENT" << endl;
    }
}
void impossible(int n, int m, int r, int ct3)
{
    if (!(((n + m) > r) && ((m + r) > n) && ((r + n) > m)) )
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    
}


void solve()
{
    int a, b, c, d, ct = 0, ct2 = 0, ct3 = 0;
    cin >> a >> b >> c >> d;
    triangle(a, b, c, ct);

    triangle(d, b, c, ct);

    triangle(a, b, d, ct);
    triangle(a, d, c, ct);
    segment(a, b, c, ct2);
    segment(a, d, c, ct2);
    segment(a, b, d, ct2);
    segment(d, b, c, ct2);
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