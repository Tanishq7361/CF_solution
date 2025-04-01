#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, y, u;
        cin >> n >> m >> k;
        u = max(n, m);
        if (k >= u)
        {
            cout << n * m<<endl;
        }
        else if(k>min(n,m))
        {
            cout<<min(n,m)*k<<endl;
        }
        else{
            cout<<n*m/2<<endl;
        }
    }
}