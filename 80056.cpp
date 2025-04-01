
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   13-10-2024
    Problem :   1921A
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d, e, f, g, h;
        cin >> a >> b;
        cin >> c >> d;
        cin >> e >> f;
        cin >> g >> h;

        ll x,y;
        x=max(a,max(c,max(e,g)));
        y=min(a,min(c,min(e,g)));
        ll w=x-y;
        cout<<w*w<<endl;
    }
}