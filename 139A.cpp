/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   17-10-2024
    Problem :   139A
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
        ll n;
        cin >> n;
        int a[7], sum = 0;
        for (int i = 0; i < 7; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        n = n % sum;
        //cout<<n<<endl;
        if (n == 0)
        {
            for (int i = 6; i >= 0; i--)
            {
                if (a[i] > 0)
                {
                    cout << i + 1<<endl;
                    break;
                }
                if(i==0){
                    cout<<1<<endl;
                    
                }
            }
        }
        else{
            for(int i=0;i<7;i++){
                n-=a[i];
                if(n<=0){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        
    }
}