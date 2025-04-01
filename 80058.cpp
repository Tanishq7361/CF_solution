
/////////////////////////////////////////////////////////////////////////////////////////

/*  
    DATE    :   13-10-2024
    Problem :   1926A
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
 int t;
 cin>>t;
 while(t--){
    int ct1=0,ct2=0;
    string s;
    cin>>s;
    for(int i=0;i<5;i++){
        if(s[i]=='A'){
            ct1++;
        }
        else{
            ct2++;
        }
    }
    if(ct1>ct2){
        cout<<"A"<<endl;
    }
    else{
        cout<<"B"<<endl;
    }
 }
   
}