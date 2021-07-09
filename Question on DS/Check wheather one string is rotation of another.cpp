#include <iostream>
using namespace std;

bool areRotations(string s1, string s2)
{

    if (s1.length() != s2.length())
    {
        return false;
    }

    string temp = s1 + s1;
    return (temp.find(s2) != string::npos);
}

int main()
{

    string s1 = "ABACD";
    string s2 = "CDABA";

    if (areRotations(s1, s2))
    {
        cout << "Strings are rotations of each other";
    }
    else
    {
        cout << "Strings are not  rotations of each other";
    }

    return 0;
}