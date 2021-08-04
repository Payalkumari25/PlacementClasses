#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[] = {2, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);
    int s = 0;
    int sub = 0;
    for (int i = 0; i < n; i++)
    {
        s += arr[i];
    }
    int j = n - 1;
    int ans = 0;
    while (j > 0)
    {
        s -= arr[j];
        sub += arr[j];
        ans++;
        j--;
        if (sub > s)
        {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}