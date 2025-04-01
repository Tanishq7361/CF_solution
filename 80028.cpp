#include <bits/stdc++.h>
using namespace std;

int max(int x, int y, int z, int w){
    return max(x,max(y,max(z,w)));
}

int main()
{
    long long int p,q,r,s,sum;
   long long int a,b,c,d,n,t;
cin>>a>>b>>c>>d;
sum=max(a,b,c,d);
p=sum-a;
q=sum-b;
r=sum-c;
s=sum-d;

if(p==0){
    cout<<q<<" "<<r<<" "<<s;
}
else if(q==0){
    cout<<p<<" "<<r<<" "<<s;
}
else if(r==0){
    cout<<q<<" "<<p<<" "<<s;
}
else if(s==0){
    cout<<q<<" "<<r<<" "<<p;
}

}