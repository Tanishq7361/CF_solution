#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, h, m;
    cin >> t;
    while (t--)
    {
        cin >> h >> m;
        cout<<((23-h)*60)+(60-m)<<endl;
    }
}