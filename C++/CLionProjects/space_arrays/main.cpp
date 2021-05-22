#include <iostream>
//#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int arr_size;
        cin >> arr_size;
        int arr[arr_size];
        for (int j = 0; j < arr_size; ++j) {
            cin >> arr[j];
        }
        //sort(arr, arr+arr_size);
        int k =arr_size-1;
        int p = 0;
        bool flag = false;
        while (arr[k] <= k+1 ) {
            for (int l = k; l >= 0; --l) {
                if (arr[l] < l + 1) {
                    p += (l+1 - arr[l]);
                    arr[l] = l+1;
                    flag = true;
                }
            }
            if(flag){
                flag = false;
                k--;
            }
            else{
                break;
            }

            }

        if (p%2 == 0){
            cout << "Second" << endl;
        }
        else
            cout << "First" << endl;
    }
    return 0;
}
