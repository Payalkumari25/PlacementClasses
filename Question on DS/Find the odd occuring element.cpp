#include <iostream>
using namespace std;

int main()
{

    int a[] = {1, 2, 1, 2, 3, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);

    // Brute Force
    // for (int i = 0; i < n; i++)
    // {
    //     int c = 0;
    //     for (int j = 0; j < n; j++)
    //     {

    //         if (a[i] == a[j])
    //         {
    //             c++;
    //         }
    //     }
    //     if (c % 2 != 0)
    //     {
    //         cout << a[i] << " ";
    //         break;
    //     }
    // }

    // M2 - Using bit XOR
    int res = 0;
    for (int i = 0; i < n; i++)
    {

        res = res ^ a[i];
    }
    cout << "Odd time element is " << res;

    return 0;
}