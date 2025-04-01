#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,sum=1,sum1=0,sum2=0;
    cin>>n;
    while(n>0){
        if(n%10==4){
            n=n/10;
            sum1+=1;
            
        }
        else if(n%10==7){
            n=n/10;
            sum2+=1;
            
        }
        else{
            sum=0;
            n=n/10;
            break;
        }
    }
    if(sum==0 || sum1==0 || sum2==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }

}