#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low-1;
    int j = high;
    do
    {
        do
        {
            i++;
        } while (arr[i] <= pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i < j)
        {
            auto temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    return j;
}

void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int partitioningIndex = partition(arr, low, high);
        QuickSort(arr, low, partitioningIndex - 1);
        QuickSort(arr, partitioningIndex + 1, high);
    }
}

int main()
{
    int arr[] = {2, 4, 12, 1, 87, 56, 72};
    int size = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr, 0, size-1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}