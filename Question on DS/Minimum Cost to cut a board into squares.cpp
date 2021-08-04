#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int r[] = {2, 1, 3, 1, 4};
    int m = sizeof(r) / sizeof(r[0]);
    int c[] = {4, 1, 2};
    int n = sizeof(c) / sizeof(c[0]);
    sort(r, r + m, greater<int>());
    sort(c, c + n, greater<int>());

    int ver = 1;
    int hor = 1;
    int i = 0, j = 0;
    int ans = 0;
    while (i < m && j < n)
    {

        if (r[i] > c[j])
        {
            ans += r[i] * ver;
            hor++;
            i++;
        }
        else
        {
            ans += c[j] * hor;
            ver++;
            j++;
        }
    }
    while (i < m)
    {
        ans += r[i] * ver;
        hor++;
        i++;
    }
    while (j < n)
    {
        ans += c[j] * hor;
        ver++;
        j++;
    }

    cout << ans;

    return 0;
}