#include <iostream>
using namespace std;

int main()
{

    int r = 5;
    int i, j;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= r - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= r; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
