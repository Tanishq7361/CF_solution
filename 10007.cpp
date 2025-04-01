#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    string s;
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'h' ){
            for(int t=i;t<(i+5);t++){
                cout<<s[t];
            }

        }
    
    }
}