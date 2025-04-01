/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   16-10-2024
    Problem :   450A
    Status  :   Incomplete
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

// void leftrota(int a[], int n)
// {
//     int temp;
//     temp = a[0];
//     for (int i = 0; i < n - 1; i++)
//     {
//         a[i] = a[i + 1];
//     }
//     a[n - 1] = temp;
// }
// void endof(int a[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         a[i] = a[i + 1];
//     }
//     n = n - 1;
// }

// int main()
// {

//     int t = 1;
//     // cin>>t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         int a[n];
//         // vector<int> v1;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             // v1.pb(a[i]);
//         }
//         int b[n];
//         // vector<int> v1;
//         for (int i = 0; i < n; i++)
//         {
//             b[i] = a[i];
//             // v1.pb(a[i]);
//         }
//         int j;
//         while (n - 1)
//         {
//             if (a[0] > m)
//             {
//                 leftrota(a, n);
//             }

//             if (a[0] <= m)
//             {
//                 endof(a, n);
//             }
//             if (n == 1)
//             {
//                 j = a[0];
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (b[i] == j)
//             {
//                 cout << i + 1;
//                 break;
//             }
//         }
//     }
// }
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int large = 0;
    for (int i = 0; i < n; i++)
    {
        large = max(a[i], large);
    }
    while (large > 0)
    {
        large -= m;
        ct++;
    }
    for (int i = 0; i < n; i++)
    {
        a[i] -= m * (ct - 1);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > 0)
        {
            cout << i + 1 << endl;
            break;
        }
    }
}