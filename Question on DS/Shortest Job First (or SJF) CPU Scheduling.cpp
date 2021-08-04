#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool comp(vector<int> a, vector<int> b)
{

    if (a[1] == b[1])
    {
        if (a[2] == b[2])
        {
            return a[0] < b[0];
        }
        else
        {
            return a[2] < b[2];
        }
    }
    else
    {
        return a[1] < b[1];
    }
}

int main()
{

    int n;
    cin >> n;
    vector<vector<int>> v(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    sort(v.begin(), v.end(), comp);
    vector<int> res;

    //min heap
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
    pq.push({v[0][2], v[0][1], v[0][0]});
    int i = 1;
    int curr_time = 0;
    while (!pq.empty())
    {

        int bt = pq.top()[0];
        int id = pq.top()[2];

        pq.pop();
        res.push_back(id);
        curr_time = curr_time + bt;

        while (true)
        {

            if (i < n && v[i][1] <= curr_time)
            {
                pq.push({v[i][2], v[i][1], v[i][0]});
                i++;
            }
            else
            {
                break;
            }
        }
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}