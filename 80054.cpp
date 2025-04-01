
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   09-10-2024
    Problem :   271A
    Status  :   Incomplete 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int l = 0;
    int i;
    while (k > 0)
    {
        if(l==n){
            break;
        }
        i = 0;
        if (s[l] == 'B' && s[l + 1 + i] == 'G')
        {
            swap(s[l], s[l + i + 1]);
            l++;

            k--;
        }
        if (s[l] != 'B')
        {
            l++;
        }
        if (s[l] == 'B' && s[l + i + 1] != 'G')
        {
            i++;
        }
    }
    cout << s;
}