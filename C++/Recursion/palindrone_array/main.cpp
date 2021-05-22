#include <iostream>
using namespace std;
bool palindrone(int *arr,  int n){
    int static p = n;
    static bool value = false;
    if(n==0){
        return true;
    }
    else{
    if(arr[p-n] == arr[n-1]){
        value = true;
        return palindrone(arr,n-1);
    }
    else
        return false;
    }
    return value;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (palindrone(arr,n)==true)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}