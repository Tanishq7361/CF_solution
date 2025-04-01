#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,sum=0;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    n=s1.size();
m=s2.size();
if(n==m){
    for(int i=0;i<n;i++){
        
        if(s1[i]==s2[(s1.size())-1-i]){
       sum=sum+1;
        }
        else{
            sum=sum;
        }

    }
    if(sum==s1.size()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
    else{
        cout<<"NO";
    }
    


}