
/////////////////////////////////////////////////////////////////////////////////////////

/*  
    DATE    :   04-10-2024
    Problem :   131A 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    string s;
    cin >> s;
    n = s.size();
    int ct = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] <= 'Z' && s[i] >= 'A')
        {
            ct++;
        }
    }

    if (ct == n - 1)
    {
        if (s[0] <= 'z' && s[0] >= 'a')
        {
            s[0] -= 32;
        }
        else if (s[0] <= 'Z' && s[0] >= 'A')
        {
            s[0] += 32;
        }

        for (int i = 1; i < n; i++)
        {
            if (s[i] <= 'Z' && s[i] >= 'A')
            {
                s[i] += 32;
            }
        }
         cout << s;
    }
    else{
        cout<<s;
    }
   
}