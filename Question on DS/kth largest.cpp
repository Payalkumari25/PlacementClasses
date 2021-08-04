#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    priority_queue<int, vector<int>, greater<int>> maxh;
    for (int i = 0; i < n; i++)
    {
        maxh.push(arr[i]);
        if (maxh.size() > k)
        {
            maxh.pop();
        }
    }
    cout << maxh.top();
}