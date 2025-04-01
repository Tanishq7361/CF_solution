/*
    AUTHOR  :   Tanishq Shah
    DATE    :   01-09-2024
    Problem :   2000A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
       if((n<=1099)&&(n>=1010)||(n<110)&&(n>101)){
        cout<<"YES"<<endl;
       }
        else
        {
            cout << "NO" << endl;
        }
    }
}