#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum1=1,sum2=0;
    string s1,y;
    cin>>n;
    cin>>s1;
    for(int i=1;i<n;i++){
        string s;
        cin>>s;
        if (s==s1){
            sum1+=1;
        }
        else{
            y=s;
            sum2+=1;
        }

    }
    
if(sum1>sum2){
    cout<<s1;
}
else{
    cout<<y;
}
}