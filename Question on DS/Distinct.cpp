#include <iostream>
using namespace std;

int main()
{

    int a[] = {2, 4, 5, 7, 7, 9, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i + 1])
        {
            c++;
        }
    }
    cout << c;
}