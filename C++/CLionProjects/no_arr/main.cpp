#include <iostream>

using namespace std;
int main() {
    int t;
    cin >>t;
    while (t--)
    {
        int arr_size;
        cin >> arr_size;
        int arr[arr_size];
        for (int i = 0; i < arr_size; ++i) {
            cin >>arr[i];
        }
        int count {0};
        int l = arr_size;
        for (int i = 0; i < l; ++i) {

            if(arr[arr_size-1] < arr_size) {
                count += arr_size - arr[arr_size - 1];
            }
            arr_size--;
        }
        if (count%2 == 0){
            cout << "Second" << endl;
        }
        else{
            cout << "First" << endl;
        }
    }
    return 0;
}
