#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "aaaaab";

    int n = s.length();
    vector<int> p(n);
    //Brute Force  - T.C-o(n^3)
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         if (s.substr(0, j) == s.substr(i - j + 1, j))
    //         {
    //             p[i] = j;
    //         }
    //     }
    // }
    // for (int i = 0; i <n; i++)
    // {
    //     cout << p[i] << " ";
    // }

    // Optimize  - T.C-o(n)

    for (int i = 1; i < n; i++)
    {

        int j = p[i - 1];

        while (j > 0 && s[i] != s[j])
        {
            j = p[j - 1];
        }
        if (s[i] == s[j])
        {
            j++;
        }

        p[i] = j;
    }

    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }

    return 0;
}