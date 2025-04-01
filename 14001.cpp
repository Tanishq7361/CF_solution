/*
    Tanishq Shah
    04-09-2024

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int b, c, d, e, g, h, j, k;
    double a, f, i;
    cin >> a >> b >> c >> d >> e;
    k = (d - b) * (d - b);
    j = (c - e) * (c - e);
    h = k + j;
    
    f = sqrt(h);
   
    i = (f / (a * 2));
    g = i;
    
    if (i > g)
    {
        cout << g + 1;
    }
    else
    {
        cout << i;
    }
}