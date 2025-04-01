#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n,s;
        cin >> n;

        for (int i = 0; i < 64; i++)
        {
            s=pow(2,i);
            if(s==n){
                cout<<"NO"<<endl;
                break;
            }
            else if(i==63){
                cout<<"YES"<<endl;
                break;
            }
            
        }
        
    }
}