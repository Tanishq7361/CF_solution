/*  AUTHOR  :   Tanishq Shah
    DATE    :   29-08-2024
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,z=0;
    cin>>n;
    string s;
    cin>>s;
    k=s.size();
    for(int i=1;i<k;i++){
        if(s[i-1]==s[i]){
z++;
        }
    }
    cout<<z;
    


}