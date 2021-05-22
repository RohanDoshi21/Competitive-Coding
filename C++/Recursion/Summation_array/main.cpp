#include <iostream>
using namespace std;
#define ll long long
ll sum(int *arr, int n){
    if(n>0){
        return sum(arr, n-1) + arr[n-1];
    }
    return 0;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<sum(arr,n);
    return 0;
}