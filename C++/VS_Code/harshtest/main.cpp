#include <iostream>
using namespace std;

int main() {
    int p;
    cin >> p;
    int arr[p];
    for(int i = 0; i <p; i++){
        cin >> arr[i];
    }
    for(int i = 0; i <p; i++){
        for(int j = i; j < p; j++){
        if(arr[p-i-1] == (arr[i] + arr[j])){
            cout << arr[i] << " " << arr[j] << endl;
             cout << arr[j] << " " << arr[i] << endl;
        }
        }
        cout << endl;
    }
    return 0;
}