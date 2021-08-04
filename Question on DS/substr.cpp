#include <iostream>
using namespace std;

int main()
{

    string s = "AABA";
    string t = "AABAACAADAABAABA";

    int S = s.length();
    int T = t.length();
    for (int i = 0; i < T - S + 1; i++) //T.C -o(ST)
    {

        if (t.substr(i, S) == s)
        {
            cout << "Pattern found at index" << i << endl;
        }
    }

    return 0;
}