#include <iostream>
using namespace std;
int binarySearch(int arr[], int key, int left, int right){
    while (right>=left){
    int mid = (left+right)/2;
    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        right = mid - 1;
        
    else 
        left = mid+1;
    }
    return -1;
}
int main() {
    int arr[] = {2,6,7,8,10,14,17,19};
    int key = 10;
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int right = size_arr-1;
    int result = binarySearch(arr, key, left, right);
    result == -1 ? cout << "Not found" : cout << "Found at index " << result;
    return 0;
}