#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[] = {2, 3, 5, 1, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int extra = 3;
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] + extra >= max)
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
    }
}