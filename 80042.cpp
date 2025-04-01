/*
    AUTHOR  :   Tanishq Shah
    DATE    :   01-09-2024

*/
#include <bits/stdc++.h>
using namespace std;
double myPow(double x, int n)
{
    double m = x;
    int z = n;
    if (z > 0)
    {
        while (n > 0)
        {
            m = m * x;
            n--;
        }
        cout << m;
    }
    else if (z == 0)
    {
        cout << 1;
    }
    else
    {
        while (n < 0)
        {
            m = m / x;
            n++;
        }
        cout << m;
    }
    return 0;
}

int main()
{
    double x;
    int n;
    cin>>x>>n;
    cout<<myPow(x,n);
}