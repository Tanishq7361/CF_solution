
/////////////////////////////////////////////////////////////////////////////////////////

/*  
    DATE    :   08-10-2024
    Problem :   236A
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  string s;
  cin>>s;
  int hash[130]={0};
  for(int i=0;i<s.size();i++){
    hash[s[i]]++;
  }
   int sum=0;
   for(int i=96;i<130;i++){
    if(hash[i]>0){
        sum++;
    }
   }
   if(sum%2==0){
    cout<<"CHAT WITH HER!";
   }
   else{
    cout<<"IGNORE HIM!";
   }
}