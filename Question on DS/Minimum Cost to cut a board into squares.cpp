#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        m--;
        n--;
        int r[m];
        int c[n];
        for (int i = 0; i < m; i++)
            cin >> r[i];
        for (int j = 0; j < n; j++)
            cin >> c[j];

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
    }

    return 0;
}