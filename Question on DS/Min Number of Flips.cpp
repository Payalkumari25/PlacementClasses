// #include <bits/stdc++.h>
// using namespace std;

// int minFlip(string s)
// {

//     int n = s.length();
//     int c1 = 0, c2 = 0;
//     for (int i = 0; i < n; i++)
//     {

//         if (i % 2 == 0 && s[i] == '1')
//             c1++;
//         if (i & 1 && s[i] == '0')
//             c1++;
//         if (i % 2 == 0 && s[i] == '0')
//             c2++;
//         if (i & 1 && s[i] == '1')
//             c2++;
//     }

//     int res = min(c1, c2);
//     return res;
// }

// int main()
// {
//     //write your code here
//     int t;
//     cin >> t;
//     while (t--)
//     {

//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         cout << minFlip(s) << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int minFlip(string s)
{

    int n = s.length();
    s += s;
    string s1, s2;

    for (int i = 0; i < s.size(); i++)
    {
        s1 += i % 2 ? '0' : '1';
        s2 += i % 2 ? '1' : '0';
    }
    int ans1 = 0, ans2 = 0, ans = INT_MAX;
    for (int i = 0; i < s.size(); i++)
    {
        if (s1[i] != s[i])
            ++ans1;
        if (s2[i] != s[i])
            ++ans2;
        if (i >= n)
        { //the most left element is outside of sliding window, we need to subtract the ans if we did `flip` before.
            if (s1[i - n] != s[i - n])
                --ans1;
            if (s2[i - n] != s[i - n])
                --ans2;
        }
        if (i >= n - 1)
            ans = min({ans1, ans2, ans});
    }
    return ans;
}

int main()
{
    //write your code here
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minFlip(s) << endl;
    }

    return 0;
}