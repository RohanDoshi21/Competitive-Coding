#include<iostream>
using namespace std;

int search(int arr[], int left, int right, int x)
{
    if (right >= 1)
    {
        int mid = left + right /2;
        
        if (arr[mid] == x)
            return mid;
        if( arr[mid] > x)
            return search(arr, left , mid -1, x);
            
        return search(arr, mid+1, right, x);
    }
    
    return -1;
}

int main(){
       int arr[] {1, 3, 5, 7, 8, 45};
       int arr_len = sizeof(arr)/sizeof(arr[0]);
       int left {0};
       int right = arr_len -1;
       int x = 0;
       int result = search(arr, left, right, x);
       (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
	return 0;
}
