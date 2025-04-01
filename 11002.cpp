
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   03-10-2024
    Problem :   158B
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int a[n];
    int hash[5] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        hash[a[i]]++;
    }
    n -= (hash[2]) / 2;
    hash[2] %= 2;
    

   int j;
    // cout << n << endl;
    if (hash[1] >= hash[3])
    {
        n -= hash[3];
        j=hash[1]-hash[3];
        hash[1] -= hash[3];
    }

    else
    {
        n -= hash[1];
        hash[1]=0;
    }
    // cout << n << endl;
    if (hash[2] > 0)
    {
        n -= min(j, 2);
        hash[1] -= 2;
    }
    if (hash[1] >= 4)
    {
        n -= (hash[1] / 4) * 3;
        hash[1] %= 4;
    }
    
    if (hash[1] > 0)
    {
        n -= hash[1] - 1;
    }

    cout << n << endl;
}