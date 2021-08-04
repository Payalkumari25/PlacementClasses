#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    while (s <= e)
    {

        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int key = 4;
    cout << binarySearch(arr, n, key);
}