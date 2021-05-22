#include <iostream>
using namespace std;
#define ll long long
ll suffix_sum(int *arr, int n, int m){
    if(m>0){
        return suffix_sum(arr,n-1,m-1) + arr[n-1];
    }
    return 0;
}
int main() {
    int n,m;
    cin >> n >> m;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << suffix_sum(arr,n,m);
    return 0;
}