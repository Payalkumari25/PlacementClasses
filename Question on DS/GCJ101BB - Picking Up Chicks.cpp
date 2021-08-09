#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t, j;
    cin >> t;

    for (j = 1; j <= t; j++)
    {

        long long int n, k, b, t;
        cin >> n >> k >> b >> t;
        long long int x[n], v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int count = 0;
        int swaps = 0;
        int not_possible = 0;

        for (int i = n - 1; i >= 0; i--)
        {

            int distance_needed = b - x[i];
            int distance_possible = v[i] * t;

            if (distance_possible >= distance_needed)
            {

                count++;
                if (not_possible > 0)
                {
                    swaps += not_possible;
                }
            }
            else
            {
                not_possible++;
            }

            if (count >= k)
            {
                break;
            }
        }

        if (count >= k)
        {
            cout << "Case#" << j << ":" << swaps << endl;
        }
        else
        {
            cout << "Case#" << j << ":"
                 << "NotPossible" << endl;
        }
    }
}