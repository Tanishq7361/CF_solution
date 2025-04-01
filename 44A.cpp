
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   15-10-2024
    Problem :   44A
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    set<string> st;
    int n;
    cin >> n;
    while (n--)
    {
        string s1, s2, s3;
        cin >> s1 >> s2;
        s3 = s1 + " " + s2;
        st.insert(s3);
    }
    cout << st.size() << endl;
}