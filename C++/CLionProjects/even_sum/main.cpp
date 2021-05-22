#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int size_arr;
        cin >> size_arr;
        int arr[size_arr];
        int sum = 0;
        for (int i = 0; i < size_arr; ++i) {
            cin >> arr[i];
            sum+=arr[i];
        }
        int steps = -1;
        if(sum %2 == 0){
            cout << 0 << endl;
        }

        else {
            for (int i = 0; i < size_arr; ++i) {
                int power = int(arr[i]/2-1);
                if (power == 0 && arr[i] %2 == 0){
                    steps = 1;
                    break;
                }
            }
            cout << steps << endl;
        }
    }
    return 0;
}
