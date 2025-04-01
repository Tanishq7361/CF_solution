
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   08-10-2024
    Problem :   469A
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    set<int> st;
    int a[100], b[100];
    int k;
    ll sum = 0, sum2;
    cin >> k;
    sum2 = (n * (n + 1)) / 2;
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    int j;
    cin >> j;
    for (int i = 0; i < j; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < k; i++)
    {

        st.insert(a[i]);
    }
    for (int i = 0; i < j; i++)
    {

        st.insert(b[i]);
    }
    for (auto it = st.begin(); it != st.end(); it++)
    {
        // cout << *it << " ";
        sum += *it;
    }
    // cout << sum;
    // cout << sum2;
    if (sum == sum2)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}