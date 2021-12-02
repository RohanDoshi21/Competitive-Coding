#include <iostream>
using namespace std;

int BinarySearch(int key, const int arr[], int size)
{
    int low = 0;
    int high = size - 1;
    while (high >= low)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int key = 12;
    int arr[] = {1, 2, 4, 12, 56, 72, 87};
    int size = sizeof(arr) / sizeof(key);
    cout << BinarySearch(key, arr, size);
    return 0;
}