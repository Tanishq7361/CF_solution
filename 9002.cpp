#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ct=0, sum = 0;
    string s;
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            ct += 1;
            if (ct >= 6)
            {
                sum += 1;
                break;
            }
        }
        else{
            ct=0;
        }
    }
    if (sum == 0)
    {
        cout << "NO";
    }
    else
    {
        cout<<"YES";
    }
}