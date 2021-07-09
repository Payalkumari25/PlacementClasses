#include <iostream>
using namespace std;

int main()
{

    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 2, 5};

    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
            }
        }
    }
}