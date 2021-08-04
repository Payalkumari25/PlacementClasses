#include <iostream>
using namespace std;

int main()
{

    int s, n, m;
    cout << " Number of days you are required to survive.";
    cin >> s;
    cout << "Maximum unit of food you can buy each day.";
    cin >> n;
    cout << "Unit of food required each day to survive.";
    cin >> m;

    int x = s / 7;
    int y = s - x;
    int total = s * m;
    int days = total / n;
    if (total % n != 0)
        days++;
    if (days <= y)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}