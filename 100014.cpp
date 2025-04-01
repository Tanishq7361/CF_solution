/*  AUTHOR  :   Tanishq Shah
    DATE    :   27-08-2024
*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         int hsh[n+1]={0};
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             hsh[a[i]]++;
//         }

//         int c = 1;
//         for (int i = 0; i < n; i++)
//         {
//            c=max(c,hsh[a[i]]);
//         }
//         cout<<n-c<<endl;
//     }
// }

/*  AUTHOR  :   Tanishq Shah
    DATE    :   27-08-2024
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x,y,z,w;
        cin>>x>>y;
        long long int a,b,c;
        cin>>a>>b;

        if(2*a<=b){
            cout<<(x+y)*a<<endl;
        }
        else{
            z=min(x,y);
            w=max(x,y);
            cout<<z*b+(w-z)*a<<endl;
        }
       
      
        
    }
}