#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i,n,k,sum=0;
    cin>>t;
    
    while(t--){
        cin>>n;
        sum=0;
        for(i=1;2*i+1<=n;i++){
k=2*i+1;
            if(n%k==0){
                sum=sum+1;
            }
        }
        if(sum==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
    
    


}