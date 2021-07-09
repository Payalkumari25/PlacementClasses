#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[] = {1, 2, 3, 6, 7, 8};
    int n = sizeof(a) / sizeof(a[0]);

    // M1
    int N = n + 1;
    int count[N + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }
    for (int i = 1; i < N + 1; i++)
    {
        if (count[i] == 0)
        {
            cout << i<<" ";
        }
    }

    // Brute force
    // int total = (n + 1) * (n + 2) / 2;
    // for (int i = 0; i < n; i++)
    // {
    //     total -= a[i];
    // }
    // cout << total << endl;

    //Using XOR

    // int x1 = a[0];
    // int x2 = 1;

    // for (int i = 1; i < n; i++)
    // {
    //     x1 = x1 ^ a[i];
    // }
    // for (int i = 2; i <= n + 1; i++)
    // {
    //     x2 = x2 ^ i;
    // }
    // cout << (x1 ^ x2) << endl;

    return 0;
}