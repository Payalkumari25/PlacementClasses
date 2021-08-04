#include <iostream>
using namespace std;

int main()
{

    int arr[] = {4, 5, 6, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1;
    int x = 6;
    int ans = 0;
    int i = 0;
    while (i < n)
    {

        if (arr[i] == x)
        {
            ans = i;
            break;
        }

        i = i + max(1, abs(arr[i] - x) / k);
    }

    cout << ans;

    return 0;
}