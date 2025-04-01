#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,t,sum=0,i=0;
    cin>>t;
    while(t--){
        cin>>n;
        for(i;i<((n/2)+1);i++){
            sum+=8*i*i;
        }
        cout<<sum<<endl;
    }



}