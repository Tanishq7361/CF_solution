
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   08-10-2024
    Problem :   110A
    Status :    Incomplete
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n;
    cin >> n;
    ll m = n;
    int r, ct = 0;
    while (n > 0)
    {
        r = n % 10;
        if (r == 4 || r == 7)
        {
            ct++;
            n /= 10;
        }
        else
        {
            cout << "NO";
            break;
        }
    }
    if(m==4 || m==7){
        cout<<"NO";
    }
    else if (n == 0 && m > 0)
    {
        cout << "YES";
    }
}