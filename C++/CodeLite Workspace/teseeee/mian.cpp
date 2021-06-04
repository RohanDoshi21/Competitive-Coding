#include <iostream>
using namespace std;

int main() {
    int arr[2] = {10 ,13};
    int i=++arr[0];
    int j =arr[0]++;

    cout << i << endl << j << arr[0];
    i=1;
    arr[i++];
    cout << arr[i] << endl ;
    return 0;
}