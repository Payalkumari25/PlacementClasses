#include <iostream>
using namespace std;

int main()
{

    int a[] = {5, 4, 7, 1, 9, 3};
    int n = sizeof(a) / sizeof(a[0]);

    // Brute Force
    // int c = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     c = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (a[i] > a[j])
    //         {
    //             c++;
    //         }
    //     }
    //     cout << c << " ";
    // }

    // M-2
    

    // M-3
    // int count[101] = {0};
    // for (int i = 0; i < n; i++)
    // {
    //     count[a[i]]++;
    // }
    // int res[n];
    // for (int i = 0; i < n; i++)
    // {
    //     int s = 0;
    //     for (int j = 0; j < a[i]; j++)
    //     {
    //         s = s + count[j];
    //     }
    //     res[i] = s;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << res[i]<<" ";
    // }

    return 0;
}