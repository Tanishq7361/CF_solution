#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s1="I hate";
   string s2="I love";
   string s3="that";
   string s4="it";
   int n,i=0;
   cin>>n;
   for(i;i<(n-1);i++){
    if(i%2==0){
        cout<<s1<<" ";
    }
    else{
        cout<<s2<<" ";
    }
    cout<<s3<<" ";
   }
   if(n%2==0){
    cout<<s2<<" ";
   }
   else{
    cout<<s1<<" ";
   }
    
    cout<<s4;


}