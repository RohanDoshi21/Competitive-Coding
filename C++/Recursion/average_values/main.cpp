#include <iostream>
#include <iomanip>
using namespace std;
double findAverage(int *arr, int n){
    if (n==1)
        return arr[n-1];
    else
        return (findAverage(arr,n-1)*(n-1) + arr[n-1])/n;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];  
    }
    cout <<fixed << setprecision(6) << findAverage(arr,n);
    return 0;
}