#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int minSum(long long int a[], long long int b[], int n)
{

    sort(a, a + n);
    sort(b, b + n);
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += abs(a[i] - b[i]);
    }
    return s;
}

int main()
{

    long long int a[] = {4, 1, 8, 7};
    long long int b[] = {2, 3, 6, 5};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Min Sum " << minSum(a, b, n);
    return 0;
}