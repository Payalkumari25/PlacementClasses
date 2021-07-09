// Union and intersection

#include <iostream>
using namespace std;

int main()
{

    int a[] = {1, 2, 2, 4, 5};
    int b[] = {1, 2,2, 4, 5};

    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);

    int res[n];
    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {

        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }

    return 0;
}
