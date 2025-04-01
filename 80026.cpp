#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5];
    int s,t,y,u;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                t=i-2;
                y=j-2;
            }
        }
    }
    if(t>0){
        if(y>0){
            cout<<t+y;
        }
        else{
            cout<<t-y;
        }
    }
    else{
        if(y>0){
            cout<<y-t;
        }
        else{
            cout<<-t-y;
        }
    }
    


}