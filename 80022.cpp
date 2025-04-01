#include <bits/stdc++.h>
using namespace std;

int main()
{
    double t,a,n,sum=0;
    cin>>t;
    n=t;
    while(t--){
        cin>>a;
        sum=sum+a;
    }
    cout<<(sum)/n;


}