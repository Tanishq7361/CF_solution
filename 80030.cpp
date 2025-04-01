#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum1=0,sum2=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            sum1+=1;
        }
        else{
            sum2+=1;
        }
    }
    if(sum1==sum2){
        cout<<"Friendship";
    }
    else if(sum1>sum2){
        cout<<"Anton";
    }
    else{
        cout<<"Danik";
    }


}