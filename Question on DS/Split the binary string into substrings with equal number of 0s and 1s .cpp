#include <iostream>
using namespace std;

int spiltBS(string str)
{

    int x = 0, y = 0;
    int n = str.length();
    int c = 0;
    for (int i = 0; i < n; i++)
    {

        if (str[i] == '0')
        {
            x++;
        }
        else
        {
            y++;
        }

        if (x == y)
        {
            c++;
        }
    }

    if (x != y)
    {
        return -1;
    }
    return c;
}

int main()
{

    string str = "0100110101";
    cout << spiltBS(str);

    return 0;
}