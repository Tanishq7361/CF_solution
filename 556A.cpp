/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   17-10-2024
    Problem :   556A
    Status  :   completed
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define v vector
#define M 1000000007

int main()
{
  int t = 1;
  // cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    string s;
    cin >> s;
    int hash[3] = {0};
    for (int i = 0; i < n; i++)
    {
      if (s[i] == '0')
      {
        hash[0]++;
      }
      if (s[i] == '1')
      {
        hash[1]++;
      }
    }
    cout << abs(hash[0] - hash[1]) << endl;
  }
}