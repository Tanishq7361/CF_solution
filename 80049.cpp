
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   08-10-2024
    Problem :   339A
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    vector<int> v;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i += 2)
    {
        v.push_back(s[i]);
    }
    
     sort(v.begin(), v.end());
     for(int i=0;i<s.size()/2;i++){
        cout<<v[i]-48<<"+";
     }
     cout<<v[(s.size())/2]-48;
}