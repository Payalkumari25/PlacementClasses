#include <iostream>
using namespace std;

int main()
{

    int n = 4;
    int M[n][n] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {

            int temp = M[i][j];
            M[i][j] = M[j][i];
            M[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}