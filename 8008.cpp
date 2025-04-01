#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,s=0;
    cin>>n;
    while(n--){
  cin>>a;
  s=s+a;
    }
    if(s==0){
        cout<<"EASY";

    }
    else{
        cout<<"HARD";
    }


}