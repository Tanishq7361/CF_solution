#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, sum1=0, sum2=0, sum3=0;
    cin >> t;
    int a[t], b[t], c[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        sum1 = sum1 + a[i];
        sum2 = sum2 + b[i];
        sum3 = sum3 + c[i];
    }
    if(sum1==0 && sum2==0 && sum3==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}