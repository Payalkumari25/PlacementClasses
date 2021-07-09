#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void duplicate(string str)
{

    map<char, int> count;

    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }

    for (auto it : count)
    {
        if (it.second > 1)
        {
            cout << "count of " << it.first << " = " << it.second << "\n";
        }
    }
}

int main()
{

    char str[] = "test string";
    duplicate(str);
}