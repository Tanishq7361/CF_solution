#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k,z,sum=0,y=0;
        cin >> n >> k;
        z=k;
        while(k/n>0)
        {
            sum+=k/n;
            k=k%n + k/n;

        }
        cout<<z+sum<<endl;
    }
}