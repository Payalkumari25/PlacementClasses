#include <iostream>
using namespace std;

void allSubs(string res, int i, int n, string str)
{

    if (i == n)
    {
        cout << res << endl;
    }
    else
    {
        allSubs(res, i + 1, n, str);
        res += str[i];
        allSubs(res, i + 1, n, str);
    }
}

int main()
{

    string str;
    cin >> str;

    allSubs("", 0, str.length(), str);
}