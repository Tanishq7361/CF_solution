/*
    AUTHOR  :   Tanishq Shah
    DATE    :   11-09-2024
    Problem :   160A
    
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,sm1=0,ct=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    for(int i=0;i<n;i++){
sm1+=a[i];
    }
    sort(a,a+n);
    for(int i=n-1;i>=0;i--){
        sum+=a[i];
        ct++;
        if(sum>(sm1-sum)){
            break;
        }
    }
    cout<<ct;
}