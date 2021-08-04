#include <iostream>
using namespace std;

bool isPalindrome(string str)
{

    int n = str.length();
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {

        if (str[i] != str[j])
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{

    string str = "ABCD"; // "AACECAAAA"
    int n = str.length();
    int flag = 0;
    int count = 0;
    while (n > 0)
    {

        if (isPalindrome(str))
        {
            flag = 1;
            break;
        }
        else
        {
            count++;

            // erase last element from string
            str.erase(str.begin() + str.length() - 1);
        }
    }

    if (flag)
    {
        cout << count;
    }

    return 0;
}