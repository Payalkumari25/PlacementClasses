#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int MaxSumDifference(int a[], int n)
{

    sort(a, a + n);
    vector<int> res;
    for (int i = 0; i < n / 2; i++)
    {
        res.push_back(a[i]);
        res.push_back(a[n - i - 1]);
    }
    if (n % 2 != 0)
    {
        res.push_back(a[n / 2]);
    }
    int maxDiff = 0;
    for (int i = 0; i < n - 1; i++)
    {
        maxDiff += abs(res[i] - res[i + 1]);
    }
    maxDiff += abs(res[n - 1] - res[0]);

    return maxDiff;
}

int main()
{

    int a[] = {1, 2, 4, 8};
    int n = sizeof(a) / sizeof(a[0]);

    cout << MaxSumDifference(a, n) << endl;

    return 0;
}