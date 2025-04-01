
/////////////////////////////////////////////////////////////////////////////////////////

/*  
    DATE    :   08-10-2024
    Problem :   59A
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int ct1=0,ct2=0;
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]<96){
        ct1++;
    }
    else{
        ct2++;
    }
  }
  if(ct1>ct2){
    for(int i=0;i<s.size();i++){
        if(s[i]<='z'&&s[i]>='a'){
            s[i]-=32;
        }
    }
  }
  else{
    for(int i=0;i<s.size();i++){
        if(s[i]<='Z'&&s[i]>='A'){
            s[i]+=32;
        }
    }
  }
  cout<<s;
   
}