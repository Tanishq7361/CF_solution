
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   15-10-2024
    Problem :   133A
    Status  :   Incomplete
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int check1(string s)
{
    int ct = 0, n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '+')
        {
            ct++;
        }
    }
    return ct;
}
int check2(string s)
{
    int ct = 0, n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '9')
        {
            ct++;
        }
    }
    return ct;
}
int check3(string s)
{
    int ct = 0, n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] =='H')
        {
            ct++;
        }
    }
    return ct;
}
int check4(string s)
{
    int ct = 0, n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] =='Q')
        {
            ct++;
        }
    }
    return ct;
}
int main()
{
    string s;
    cin >> s;
    int z = check4(s) + check3(s)  + check2(s);

    if (z > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}