
/////////////////////////////////////////////////////////////////////////////////////////

/*
    DATE    :   08-10-2024
    Problem :   1472B
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int hash[256]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            hash[a[i]]++;
        }
       //cout<<hash[2];
       if(hash[1]%2!=0){
        cout<<"NO"<<endl;
       }
       else if(hash[2]%2==0){
        cout<<"YES"<<endl;
       }
       else if(hash[2]%2!=0 && hash[1]!=0){
         cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }

    }
}