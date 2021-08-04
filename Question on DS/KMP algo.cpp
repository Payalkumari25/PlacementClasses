#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_function(string s)
{

    int n = s.length();
    vector<int> p(n);
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

    return p;
}

int main()
{

    string t = "THIS IS A TEST TEXT";  // "ABABDABACDABABCABAB"
    string s = "TEST";                    //"ABABCABAB"

    vector<int> prefix = prefix_function(s);
    int T = t.length();
    int S = s.length();
    int i(0), j(0);
    int pos = -1;
    while (i < T)
    {

        if (t[i] == s[j])
        {
            j++;
            i++;
        }
        else
        {
            if (j != 0)
            {
                j = prefix[j - 1];
            }
            else
            {
                i++;
            }
        }

        if (j == S)
        {
            pos = i - S;
            break;
        }
    }
    cout << pos;

    return 0;
}