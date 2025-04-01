
/////////////////////////////////////////////////////////////////////////////////////////

/*  
    DATE    :   14-10-2024
    Problem :   581A
    Status  :   completed
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int a,b;
    cin>>a>>b;
    int z=min(a,b);
    int y=max(a,b);
    y=(y-z)/2;

    cout<<z<<" "<<y<<endl;
 
   
}