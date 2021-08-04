#include <iostream>
using namespace std;

int main()
{

    int a[] = {-1, -1, -2, 4, 3};
    int n = sizeof(a) / sizeof(a[0]);

    int neg_count = 0;
    int zero_count = 0;
    int p = 1;
    int max_neg = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        if (a[i] == 0)
        {
            zero_count++;
            continue;
        }
        else if (a[i] < 0)
        {
            neg_count++;
            max_neg = max(max_neg, a[i]);
        }
        p = p * a[i];
    }

    if (zero_count == n)
    {
        cout << "0";
    }
    else if (neg_count == 1 && neg_count + zero_count == n)
    {
        cout << "0";
    }
    else if (neg_count & 1)
    {
        p = p / max_neg;
    }
    cout << p << endl;

    return 0;
}