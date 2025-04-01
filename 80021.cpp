#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, a, b, t, s, z;
    cin >> t;
    while (t--)
    {
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
        }
        else{
            cout<<(b-(a%b))<<endl;
        }
    }
 
}