#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, x, y;
    cin >> x >> y;
    char a[x][y];

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            if (i % 2 == 0)
            {
                a[i][j] = '#';
            }
            else
            {
                if (i % 4 == 1)
                {
                    if (j == (y - 1))
                    {
                        a[i][j] = '#';
                    }
                    else
                    {
                        a[i][j] = '.';
                    }
                }
                else
                {
                    if (j == 0)
                    {
                        a[i][j] = '#';
                    }
                    else
                    {
                        a[i][j] = '.';
                    }
                }
            }
        }
    }
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            cout << a[i][j];
        }
        cout<<endl;
    }
}