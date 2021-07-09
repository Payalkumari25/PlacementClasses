#include <iostream>
using namespace std;

int main()
{

    int a[] = {1, 3, 4, 6, 8};
    int b[] = {6, 7, 8, 9, 10, 12};

    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);

    int i = 0, j = 0;
    while (i < m && j < n)
    {

        if (a[i] < b[j])
        {
            cout << a[i++] << " ";
        }
        else if (b[j] < a[i])
        {
            cout << b[j++] << " ";
        }
        else
        {
            cout << a[i++] << " ";
            j++;
        }
    }
    while (i < m)
    {
        cout << a[i++] << " ";
    }
    while (j < n)
    {
        cout << b[j++] << " ";
    }

    return 0;
}