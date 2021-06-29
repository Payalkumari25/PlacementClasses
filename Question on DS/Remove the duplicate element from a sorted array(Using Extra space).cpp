// Using Extra Space

#include <iostream>
using namespace std;

int duplicate(int arr[], int n)
{

    if (n == 0 || n == 1)
    {
        return n;
    }

    int res[n];
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i] != arr[i + 1])
        {
            res[j++] = arr[i];
        }
    }

    res[j] = arr[n - 1];
    j++;
    for (int i = 0; i < j; i++)
    {
        arr[i] = res[i];
    }
    return j;
}

int main()
{

    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    n = duplicate(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}