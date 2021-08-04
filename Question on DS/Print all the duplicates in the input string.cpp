#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cin >> str;
    int n = str.length();
    map<char, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[str[i]]++;
    }

    for (auto it : mp)
    {

        if (it.second > 1)
        {
            cout << it.first << it.second << endl;
        }
    }
    return 0;
}