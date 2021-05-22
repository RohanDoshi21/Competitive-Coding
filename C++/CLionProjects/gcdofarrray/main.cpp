#include <iostream>
using namespace std;

int gcd(int a, int b){
    while (a!=b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int gcdofarray(int arr[], int sizearr){
    int result = arr[0];
    for (int i = 0; i < sizearr; ++i) {
        result = gcd(arr[i], result);
        if (result == 1)
            return 1;
    }
    return result;
}

int main(){
    int sizearr =0, arr[50];
    int x;
    cin >> x;
    cout << x;
    for (int i =0;;i++) {
        cin >> arr[i];
        if (arr[i] < 0)
            break;
        sizearr++;
    }
    cout << gcdofarray(arr,sizearr);
    return 0;
}