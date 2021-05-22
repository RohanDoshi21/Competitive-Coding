#include<iostream>
using namespace std;
int search(int arr[], int len_arr, int x, int left, int right)
{
    if (right <= len_arr && x >= arr[left] && x <= arr[right] )
    {
    int pos = left + (((double)right-left)/(arr[right]-arr[left])*(x-arr[left]));
    if (x == arr[pos])
    {
        return pos;
    }
    if (x > arr[pos])
        return search(arr, len_arr, x, pos+1, right);
        
        return search(arr, len_arr, x , left, pos-1);
    }
    return -1;
}
int main(){
     int arr[] = {1, 5 ,6 , 7 , 13, 16, 21, 28, 33, 37, 44, 48, 50};
       int len_arr = sizeof(arr)/ sizeof(arr[0]);
       int x = 50;
       int left {0};
       int right = len_arr-1;
       int result = search(arr, len_arr, x, left, right);
       (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
       
	return 0;
}
