#include<iostream>
#include<cmath>
using namespace std;
int Binary_Search(int arr[], int left, int right, int x)
{
    if(right > left)
    {
        int mid = left + right /2;
        if(arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] > x)
        {
            return Binary_Search(arr, left, mid-1, x);
        }
        return Binary_Search(arr, mid+1, right, x);
    }
    return -1;
}

int Jump_Search(int arr[], int len_arr, int x)
{
    int left = 0;
    int right = sqrt(len_arr);
    while(right < len_arr && arr[right] <=x)
    {
        left = right;
        right += sqrt(len_arr);
        if(right >= len_arr)
        {
            right = len_arr;
        }
    }
    for(int i = left; i<right; i++)
    {
        if(arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int Interpolation_Search(int arr[], int left, int right, int len_arr, int x){
    if (right <= len_arr && x >= arr[left] && x <= arr[right] )
    {
        int pos = left + ((double)(right-left)/(arr[right] - arr[left]))*(x - arr[left]);
        if(arr[pos] == x)
        {
            return pos;
        }
        if (arr[pos] > x)
        {
            return Interpolation_Search(arr, left, pos-1, len_arr, x);
        }
        return Interpolation_Search(arr, pos+1, right, len_arr, x);
    }
    return -1;
}
/*
int Interpolation_Search(int arr[], int left, int right, int len_arr, int x)
{
    if (right <= len_arr && x >= arr[left] && x <= arr[right] )
    {
    int pos = left + (((double)right-left)/(arr[right]-arr[left])*(x-arr[left]));
    if (x == arr[pos])
    {
        return pos;
    }
    if (x > arr[pos])
        return Interpolation_Search(arr, pos+1, right , len_arr, x);
        
        return Interpolation_Search(arr, left, pos-1, len_arr, x);
    }
    return -1;
}
 * */
int main(){
       int arr[] = {1 , 5 ,6 , 7 , 13, 16, 21, 28 , 33, 37 , 44, 48, 40};
       int len_arr = sizeof(arr)/ sizeof(arr[0]);
       int element {16};
       int right = len_arr-1;
       int left = 0;
      int result = Binary_Search(arr, left, right, element);
       (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
       result = Jump_Search(arr, len_arr, element);
       (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
        result = Interpolation_Search(arr, left, right, len_arr, element);
       (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
	return 0;
}
