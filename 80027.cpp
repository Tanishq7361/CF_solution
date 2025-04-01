#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int k,w,n;
    cin>>k>>n>>w;

    if(w*(w+1)/2*k<=n){
        cout<<0;
    }
    else{
        cout<<(w*(w+1)/2*k)-n;
    }
    
    


}