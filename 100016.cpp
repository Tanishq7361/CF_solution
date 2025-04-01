/*  
    DATE    :   15-09-2024
    Problem :   124A  
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int l = a, r = b, ct = 0;
    while (l < n && r >= 0)
    {
        ct++;
        l++;
        r--;
    }
    cout << ct;
}