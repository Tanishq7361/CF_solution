#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int t, a, b, n, s;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> n >> s;
        if (a * n + b > s)
        {
            if (a * n > s)
            {
                if (b >= (s % n))
                {
                    cout << "YES"<<endl;
                }
                else
                {
                    cout << "NO"<<endl;
                }
            }
            else if (s=a*n)
            {
                cout << "YES"<<endl;
            }
            else
            {
                if ((s - a * n) <= b)
                {
                    cout << "YES"<<endl;
                }
                else
                {
                    cout << "NO"<<endl;
                }
            }
        }
        else if(s==a*n+b)
        {
            cout << "YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}