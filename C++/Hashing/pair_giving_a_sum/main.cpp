#include <iostream>
#include <unordered_map>
using namespace std;
int count_pairs(int arr[], int n, int target){
    int map[n];
    int count = 0;
    for (size_t i = 0; i < n; i++)
    {
        int ai = target - arr[i];
        if(map[ai] == 0){
            map[arr[i]]++;
        }
        else{
            count += map[ai];
            map[arr[i]++];
        }
    }
    return count;
    
}
int main() {
    int n;
    return 0;
    cin >> n;
    int arr[n];
    int target;
    cin >> target;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];      
    }
    cout << count_pairs(arr, n , target);
}