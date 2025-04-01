#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n,k;
    cin>>n>>k;
    if(n/2>=k){
        cout<<2*k-1;

    }
    else{
        cout<<(k-((n)/2))*2;
    }
    
    


}