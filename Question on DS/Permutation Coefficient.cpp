#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int r;
    cin >> r;

    int p = 1;
    for (int i = 0; i < r; i++)
    {
        p *= n - i;
    }
    cout << p;
    return 0;
}