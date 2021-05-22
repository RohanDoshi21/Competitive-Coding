#include<iostream>
#include<cmath>
using namespace std;

int search(int arr[], int len_arr, int x)
{
    int low = 0;
    int high = sqrt(len_arr);
    
    while(high < len_arr && arr[high] <= x)
    {
        low = high;
        high += sqrt(len_arr);
        
        if(high > len_arr-1)
        {
            high= len_arr;
        }
    }
    for (int i = low; i < high; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main(){
       int arr[] = {1 , 5 ,6 , 7 , 13, 16, 21, 28 , 33, 37 , 44, 48, 40};
       int len_arr = sizeof(arr)/ sizeof(arr[0]);
      // int jump = sqrt(len_arr);
       int x = 0;
       int result = search(arr, len_arr, x);
       (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
       
	return 0;
}
