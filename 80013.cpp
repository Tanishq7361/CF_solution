#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, s1 = 0, n = 5, t = 0,s2=0;
    int a[5][5];
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < 5; ++j){
            s1=s1+a[i][j];
            if(s1==1){
                t=t+abs(4-j);
            }

        }
    }
        cout<<t<<endl;;
}

