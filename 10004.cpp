#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,s,m,n,t;
   
    cin>>a>>b>>c;
     s=a+b*c;
    m=(a+b)*c;
    n=a*(b+c);
    if((a==c&&a==1) && b!=1){
        cout<<a+b+c;
    }
    else if((a==b)&&(a==c)&&(a==1)){
        cout<<a+b+c;
     }

    else if(a!=1 && b!=1 && c!=1){
        cout<<a*b*c;
    }
    else if(s>=m){
        if(s>=n){
            cout<<s;
        }
        else{
            cout<<n;
        }
    }
    else if(s<m){
        if(m>=n){
            cout<<m;
        }
        else{
            cout<<n;
        }
    }
    
    


}