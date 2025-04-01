#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, t, sum = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (n--){
            if (n % 10 != 0)
            {
                n = n / 10;
                sum = sum + 1;
            }
            else{
                n=n/10;
            }
        }
        cout<<sum<<endl;
        
    }
}