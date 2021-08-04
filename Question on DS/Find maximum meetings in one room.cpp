#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct meeting
{
    int start;
    int end;
    int pos;
};

bool comp(struct meeting m1, struct meeting m2)
{
    return (m1.end < m2.end);
}

int main()
{

    int s[] = {1, 3, 0, 5, 8, 5};
    int n = sizeof(s) / sizeof(s[0]);
    int f[] = {2, 4, 6, 7, 9, 9};
    struct meeting meet[n];
    for (int i = 0; i < n; i++)
    {
        meet[i].start = s[i];
        meet[i].end = f[i];
        meet[i].pos = i + 1;
    }

    sort(meet, meet + n, comp);
    vector<int> v;
    v.push_back(meet[0].pos);
    int i = 0;
    int j = 1;
    int c = 1;
    int k = 1;
    while (j < n)
    {

        if (meet[i].end < meet[j].start)
        {
            c++;
            v.push_back(meet[j].pos);
            i = j;
            j++;
            k++;
        }
        else
        {
            j++;
        }
    }

    for (int k = 0; k < v.size(); k++)
    {
        cout << v[k] << " ";
    }

    return 0;
}