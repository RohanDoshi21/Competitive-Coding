#include<iostream>
#include<algorithm>
using namespace std;
int Binary_Search(int arr[], int left, int right, int x)
{
    if(right >= left)
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
int Exponential_Search(int arr[], int len_arr, int x){
        
    if (arr[0] == x)
    {
        return 0;
    }
    int i = 1;
    while(i<len_arr && arr[i]<= x)
        {i *=2;}
    
    return Binary_Search(arr, i/2 , min(i ,len_arr-1), x );
}
int main(){
      int arr[] = {1 , 5 ,6 , 7 , 13, 16, 21, 28 , 33, 37 , 44, 48, 40};
       int len_arr = sizeof(arr)/ sizeof(arr[0]);
       int element {16};
       int result = Exponential_Search(arr, len_arr, element);
       (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
	return 0;
}
